// ItemType stores an integer and supports comparison and output

#ifndef ITEMTYPE_H
#define ITEMTYPE_H

// Enum to represent result of comparing two ItemType objects
enum Comparison { LESS, EQUAL, GREATER };

class ItemType {
public:
    ItemType();
    ItemType(int val);

    Comparison compareTo(const ItemType& other) const;
    void print() const;
    int getValue() const;
private:
    int value;
};

#endif // ITEMTYPE_H
