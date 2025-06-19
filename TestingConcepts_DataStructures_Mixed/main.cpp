#include <iostream>
#include "ItemType.h"
#include "Bst.h"
#include "HeapType.h"
using namespace std;

int main(){
    BST myTree;

    int values[] = {15, 8, 10, 19, 16, 23, 6, 7, 9, 20, 26, 1, 25};

    for (int val : values) {
        ItemType item(val);
        myTree.putItem(item);
    }
    myTree.print();
    cout << myTree.numberOfLeafNodes(&myTree)<<endl;

    ItemType* heapVals[] = {
        new ItemType(40),
        new ItemType(10),
        new ItemType(30),
        new ItemType(50),
        new ItemType(20)
    };

    int numHeapVals = sizeof(heapVals) / sizeof(heapVals[0]);

    HeapType heap;
    heap.HeapSort(heapVals, numHeapVals);

    for (int i = 0; i < numHeapVals; ++i) {
        heapVals[i]->print();
        cout << " ";
        delete heapVals[i]; 
    }
    cout << endl;
}