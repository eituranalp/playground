#ifndef ITEMTYPE_H
#define ITEMTYPE_H

// Enum for comparison
enum Comparison { LESS, EQUAL, GREATER };

class ItemType {
public:
    ItemType();
    ItemType(int val);

    Comparison compareTo(const ItemType& other) const;
    void print() const;

private:
    int value;
};

#endif // ITEMTYPE_H
