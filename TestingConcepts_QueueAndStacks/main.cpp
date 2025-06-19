#include <iostream>
#include "ArrayStack.h"
#include "ArrayQueue.h"
using namespace std;
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