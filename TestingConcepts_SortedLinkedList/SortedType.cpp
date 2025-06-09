#include "SortedType.h"

SortedType::SortedType(): head(nullptr){}
SortedType::~SortedType(){
    clear();
}
void SortedType::insert(int item){
    Node* newNode = new Node(item);
    Node* currNode= head;
    if(isEmpty() ||item<head->data){
        newNode->next=head;
        newNode->prev=nullptr;
        if(head!=nullptr){
            head->prev=newNode;
        }
        head=newNode;
        return;
    }
    while(currNode->next!=nullptr&&currNode->data<item){
        //moves forward until it goes past item
        currNode=currNode->next;
    }
    if(currNode->data<item &&currNode->next==nullptr){
        //insert at the end
        currNode->next = newNode;
        newNode->prev = currNode;
        newNode->next = nullptr;
        return;
    }
    //insert before currNode
    newNode->next = currNode;
    newNode->prev = currNode->prev;
    currNode->prev->next = newNode;
    currNode->prev = newNode;
}
bool SortedType::isEmpty(){
    return head==nullptr;
}
bool SortedType::remove(int item){
    Node* currNode = head;
    while(currNode!=nullptr && currNode->data<item){
        currNode=currNode->next;
    }
    if(currNode == nullptr ||currNode->data!=item){
        return false;
    }
    if(currNode->prev !=nullptr){
        currNode->prev->next=currNode->next;
    }else{
        head=currNode->next;
    }
    if(currNode->next!=nullptr){
        currNode->next->prev = currNode->prev;
    }

    delete currNode;
    return true;
}
Node* SortedType::search(int item) {
    Node* currNode = head;
    while (currNode != nullptr && currNode->data < item) {
        currNode = currNode->next;
    }

    if (currNode != nullptr && currNode->data == item) {
        return currNode;
    }

    return nullptr; // Not found
}
int SortedType::getLength(){
    Node* tempNode=head;
    int ctr=0;
    while(tempNode!=nullptr){
        ctr++;
        tempNode=tempNode->next;
        
    }
    return ctr;
}
void SortedType::clear(){
    Node* tempNode=head;
    while(tempNode!=nullptr){
        Node* nextNode=tempNode->next;
        delete(tempNode);
        tempNode=nextNode;
    }
    head=nullptr;
}