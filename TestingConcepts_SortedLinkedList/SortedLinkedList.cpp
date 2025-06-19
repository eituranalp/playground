#include "SortedLinkedList.h"

// Constructor
SortedLinkedList::SortedLinkedList() : head(nullptr) {}

// Insert a node in sorted order
void SortedLinkedList::insert(int x) {
    NodeSLL* newNode = new NodeSLL(x);

    // If list is empty or new node should be first
    if (!head || x < head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to find insertion point
    NodeSLL* current = head;
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
        NodeSLL* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the node
    NodeSLL* current = head;
    while (current->next && current->next->data != x) {
        current = current->next;
    }

    // If the node was found, delete it
    if (current->next) {
        NodeSLL* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Search for a value in the list
bool SortedLinkedList::search(int x) {
    NodeSLL* current = head;
    while (current) {
        if (current->data == x) return true;
        current = current->next;
    }
    return false;
}

// Display the list
void SortedLinkedList::display() {
    NodeSLL* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}



void SortedLinkedList::findItem(NodeSLL* listData, NodeSLL*& loc, NodeSLL*& preloc, bool& found, int item) {
    found = false;
    loc = listData;
    preloc = nullptr;

    while (loc != nullptr && loc->data < item) {
        preloc = loc;
        loc = loc->next;
    }

    if (loc != nullptr && loc->data == item) {
        found = true;
    }
}


// Destructor to free memory
SortedLinkedList::~SortedLinkedList() {
    NodeSLL* current = head;
    while (current) {
        NodeSLL* temp = current;
        current = current->next;
        delete temp;
    }
}