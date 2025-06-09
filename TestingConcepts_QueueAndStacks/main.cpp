#include <iostream>
#include "ArrayStack.h"
#include "ArrayQueue.h"
using namespace std;
/*
const int MAX_ITEMS = 100;
class ItemType {
    public:
        int key;
        ItemType(int k = 0) : key(k) {}
        bool operator==(const ItemType& other) const { return key == other.key; }
    };
struct NodeType {
    ItemType info;
    NodeType* next;
};
class UnsortedType {
    public:
        UnsortedType(); 
        bool IsFull() const;
        void InsertItem(ItemType item);
        void PrintList() const;
        void PartitionLists(UnsortedType list, ItemType item, UnsortedType& list1, UnsortedType& list2);
    
    private:
        ItemType items[MAX_ITEMS];
        int length;
    };
    UnsortedType::UnsortedType() {
        length = 0;
    }


void UnsortedType::InsertItem(ItemType item) {
    if (!IsFull()) {
        items[length] = item;
        length++;
    }
}
    
void UnsortedType::PartitionLists(UnsortedType list, ItemType item, UnsortedType& list1, UnsortedType& list2) {
    for (int i = 0; i < list.length; i++) {
        if (list.items[i].key <= item.key) { // compare ItemTypes directly or use compareTo
            list1.InsertItem(list.items[i]);  // add to list1 if key is <= item's key
        } else {
            list2.InsertItem(list.items[i]);  // add to list2 if key is > item's key
        }
    }
}
*/
int main() {
    std::cout << "Testing ArrayStack..." << std::endl;
    ArrayStack stack(5);

    // Push elements
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Peek top element
    std::cout << "Top element: " << stack.peek() << std::endl; // Should be 30

    // Pop elements
    std::cout << "Popped: " << stack.pop() << std::endl; // Should be 30
    std::cout << "Popped: " << stack.pop() << std::endl; // Should be 20

    // Check if stack is empty
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl; // Should be No

    // Pop last element
    std::cout << "Popped: " << stack.pop() << std::endl; // Should be 10

    // Check empty stack behavior
    std::cout << "Popped: " << stack.pop() << std::endl; // Should return -1
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl; // Should be Yes

    std::cout << "\nTesting ArrayQueue..." << std::endl;
    ArrayQueue queue(5);

    // Enqueue elements
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    // Front and Rear
    std::cout << "Front element: " << queue.frontElement() << std::endl; // Should be 100
    std::cout << "Rear element: " << queue.rearElement() << std::endl; // Should be 300

    // Dequeue elements
    std::cout << "Dequeued: " << queue.dequeue() << std::endl; // Should be 100
    std::cout << "Dequeued: " << queue.dequeue() << std::endl; // Should be 200

    // Check size
    std::cout << "Queue size: " << queue.getSize() << std::endl; // Should be 1

    // Dequeue last element
    std::cout << "Dequeued: " << queue.dequeue() << std::endl; // Should be 300

    // Try to dequeue from empty queue
    std::cout << "Dequeued: " << queue.dequeue() << std::endl; // Should return -1
    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl; // Should be Yes

    return 0;
}