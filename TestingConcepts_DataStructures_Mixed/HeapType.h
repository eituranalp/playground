#ifndef HEAPTYPE_H
#define HEAPTYPE_H

#include "ItemType.h"

class HeapType {
public:
    void ReheapDown(ItemType* values[], int root, int bottom);
    void ReheapUp(ItemType* values[], int root, int bottom);
    void HeapSort(ItemType* values[], int numValues);
};

#endif
