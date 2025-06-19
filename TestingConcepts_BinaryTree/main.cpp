#include <iostream>
#include "TreeType.h"
using namespace std;

int main() {
    TreeType tree;

    // Insert a few values
    tree.PutItem(ItemType(10));
    tree.PutItem(ItemType(5));
    tree.PutItem(ItemType(15));

    // Show number of nodes
    cout << "Tree length: " << tree.GetLength() << endl;

    // Search for a value
    bool found;
    ItemType searchItem(5);
    tree.GetItem(searchItem, found);
    cout << "Item 5 " << (found ? "found." : "not found.") << endl;

    return 0;
}
