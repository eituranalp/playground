#include "ArrayQueue.h"
#include <iostream>

ArrayQueue::ArrayQueue(int max_items) {
    queue = new int[max_items];
    size = 0;
    front = 0;
    rear = -1;
    capacity = max_items;
}

ArrayQueue::ArrayQueue() {
    capacity = DEF_MAX_ITEMS;
    queue = new int[capacity];
    size = 0;
    front = 0;
    rear = -1;
}

ArrayQueue::~ArrayQueue() {
    delete[] queue;
}

void ArrayQueue::enqueue(int element) {
    if (!isFull()) {
        rear = (rear + 1) % capacity;
        queue[rear] = element;
        size++;
    }
}

int ArrayQueue::dequeue() {
    if (!isEmpty()) {
        int temp = queue[front];
        front = (front + 1) % capacity;
        size--;
        return temp;
    } else {
        return -1;
    }
}

bool ArrayQueue::isFull() {
    return (size == capacity);
}

bool ArrayQueue::isEmpty() {
    return (size == 0);
}

int ArrayQueue::getSize() {
    return size;
}

int ArrayQueue::frontElement() {
    if (!isEmpty()) {
        return queue[front];
    } else {
        return -1;
    }
}

int ArrayQueue::rearElement() {
    if (!isEmpty()) {
        return queue[rear];
    } else {
        return -1;
    }
}
