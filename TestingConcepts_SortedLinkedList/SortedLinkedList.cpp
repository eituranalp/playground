#include "SortedLinkedList.h"

// Constructor
SortedLinkedList::SortedLinkedList() : head(nullptr) {}

// Insert a node in sorted order
void SortedLinkedList::insert(int x) {
    Node* newNode = new Node(x);

    // If list is empty or new node should be first
    if (!head || x < head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to find insertion point
    Node* current = head;
    while (current->next && current->next->data < x) {
        current = current->next;
    }

    // Insert the node
    newNode->next = current->next;
    current->next = newNode;
}

// Remove a node
void SortedLinkedList::remove(int x) {
    if (!head) return; // List is empty

    // If head contains the value to be deleted
    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the node
    Node* current = head;
    while (current->next && current->next->data != x) {
        current = current->next;
    }

    // If the node was found, delete it
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Search for a value in the list
bool SortedLinkedList::search(int x) {
    Node* current = head;
    while (current) {
        if (current->data == x) return true;
        current = current->next;
    }
    return false;
}

// Display the list
void SortedLinkedList::display() {
    Node* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}



void findItem(Node* listData, Node* &loc, Node* &preloc, bool &found, int item){
    found = false;
    bool moreToSearch=true;
    if(!listData){
        return;
    }
    loc=listData->next;
    preloc=listData;
    while(loc!=listData->next&&moreToSearch){
        //start the search
    }
}

// Destructor to free memory
SortedLinkedList::~SortedLinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}