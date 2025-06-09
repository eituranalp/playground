#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Constants.h"

class ArrayStack {
private:
    int top;
    int* stack;
    int capacity;

public:
    ArrayStack(int max_items);
    ArrayStack();
    ~ArrayStack();

    void push(int element);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    int size();
    int getCapacity();
};

#endif
