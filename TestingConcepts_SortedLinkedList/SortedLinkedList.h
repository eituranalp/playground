#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* previous;
    Node(int val) : data(val), next(nullptr), previous(nullptr) {} // Constructor
};

class SortedLinkedList {
private:
    Node* head; // Pointer to the head node

public:
    SortedLinkedList();    // Constructor
    void insert(int x);    // Insert a node in sorted order
    void remove(int x);    // Remove a node
    bool search(int x);    // Search for a value
    void display();        // Display the list
    ~SortedLinkedList();   // Destructor to free memory
    void findItem(Node* listData, Node* &loc, Node* &preloc, bool &found, int item);
    
};

#endif
