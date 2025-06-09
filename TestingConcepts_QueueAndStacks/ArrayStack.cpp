#include "ArrayStack.h"
#include <iostream>

ArrayStack::ArrayStack(int max_items) {
    stack = new int[max_items];
    top = -1;
    capacity = max_items;
}

ArrayStack::ArrayStack() {
    stack = new int[DEF_MAX_ITEMS];
    top = -1;
    capacity = DEF_MAX_ITEMS;
}

ArrayStack::~ArrayStack() {
    delete[] stack;
}

void ArrayStack::push(int element) {
    if (!isFull()) {
        top++;
        stack[top] = element;
    }
}

int ArrayStack::pop() {
    if (!isEmpty()) {
        int temp = stack[top];
        top--;
        return temp;
    } else {
        return -1;
    }
}

int ArrayStack::peek() {
    if (!isEmpty()) {
        return stack[top];
    } else {
        return -1;
    }
}

bool ArrayStack::isEmpty() {
    return (top == -1);
}

bool ArrayStack::isFull() {
    return (top == capacity - 1);
}

int ArrayStack::size() {
    return top + 1;
}

int ArrayStack::getCapacity() {
    return capacity;
}
