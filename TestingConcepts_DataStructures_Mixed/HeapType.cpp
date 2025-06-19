#include "HeapType.h"
#include <algorithm> // for std::swap

void HeapType::ReheapDown(ItemType* values[], int root, int bottom) {
    int maxChild, rightChild, leftChild;
    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;

    if (leftChild <= bottom) {
        if (leftChild == bottom) {
            maxChild = leftChild;
        } else {
            if (values[leftChild]->getValue() >= values[rightChild]->getValue()) {
                maxChild = leftChild;
            } else {
                maxChild = rightChild;
            }
        }

        if (values[root]->getValue() < values[maxChild]->getValue()) {
            std::swap(values[root], values[maxChild]);
            ReheapDown(values, maxChild, bottom);
        }
    }
}

void HeapType::ReheapUp(ItemType* values[], int root, int bottom) {
    if (bottom <= root) return;

    int parent = (bottom - 1) / 2;
    if (values[bottom]->getValue() >= values[parent]->getValue()) {
        std::swap(values[bottom], values[parent]);
        ReheapUp(values, root, parent);
    }
}

void HeapType::HeapSort(ItemType* values[], int numValues) {
    int index;

    // Build max heap
    for (index = numValues / 2 - 1; index >= 0; index--) {
        ReheapDown(values, index, numValues - 1);
    }

    // Extract elements
    for (index = numValues - 1; index >= 1; index--) {
        std::swap(values[0], values[index]);
        ReheapDown(values, 0, index - 1);
    }
}
