#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H
#include <iostream>
#include "ItemType.h"
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {} // Constructor
};

class SortedType{
private:
    Node* head;
public:
    SortedType();
    ~SortedType();
    void insert(int item);
    bool remove(int item);
    Node* search(int item);
    bool isEmpty();
    int getLength();
    void clear();
};

#endif