#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;

// Possible comparison results for two ItemType values
enum Comparison { LESS, EQUAL, GREATER };

// Represents an item that stores an integer value and supports comparison and printing
class ItemType {
public:
    ItemType() : value(0) {}
    ItemType(int val) : value(val) {}

    Comparison compareTo(const ItemType& other) const {
        if (value < other.value) return LESS;
        else if (value > other.value) return GREATER;
        else return EQUAL;
    }

    void print() const {
        cout << value;
    }

private:
    int value;
};

#endif
