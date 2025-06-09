#include "ItemType.h"
#include <iostream>

using namespace std;

// Default constructor
ItemType::ItemType() : value(0) {}

// Parameterized constructor
ItemType::ItemType(int val) : value(val) {}

// Comparison function
Comparison ItemType::compareTo(const ItemType& other) const {
    if (value < other.value) return LESS;
    else if (value > other.value) return GREATER;
    else return EQUAL;
}
int ItemType::getValue() const {
    return value;
}

// Print function
void ItemType::print() const {
    cout << value;
}
