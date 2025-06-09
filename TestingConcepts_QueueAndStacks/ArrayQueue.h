#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "Constants.h"

class ArrayQueue {
private:
    int* queue;
    int size;
    int front;
    int rear;
    int capacity;

public:
    ArrayQueue(int max_items);
    ArrayQueue();
    ~ArrayQueue();

    void enqueue(int element);
    int dequeue();
    bool isFull();
    bool isEmpty();
    int getSize();
    int frontElement();
    int rearElement();
};

#endif
