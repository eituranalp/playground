//List based Stack
#include <iostream>

// Node definition
struct Node {
    int data;
    Node* next;
};

class StackType {
private:
    Node* topPtr;

public:
    // Constructor
    StackType() {
        topPtr = nullptr;
    }

    // Destructor
    ~StackType() {
        while (!IsEmpty())
            Pop();
    }

    // Copy Constructor
    StackType(const StackType& other) {
        topPtr = nullptr;
        if (other.topPtr == nullptr) return;

        Node* src = other.topPtr;
        Node* last = nullptr;

        while (src != nullptr) {
            Node* newNode = new Node{src->data, nullptr};
            if (topPtr == nullptr)
                topPtr = last = newNode;
            else {
                last->next = newNode;
                last = newNode;
            }
            src = src->next;
        }
    }
    /*
    // Assignment Operator
    StackType& operator=(const StackType& other) {
        if (this != &other) {
            while (!IsEmpty()) Pop();
            topPtr = nullptr;

            Node* src = other.topPtr;
            Node* last = nullptr;

            while (src != nullptr) {
                Node* newNode = new Node{src->data, nullptr};
                if (topPtr == nullptr)
                    topPtr = last = newNode;
                else {
                    last->next = newNode;
                    last = newNode;
                }
                src = src->next;
            }
        }
        return *this;
    }
    */
    // Stack Operations
    bool IsEmpty() const {
        return topPtr == nullptr;
    }

    void Push(int item) {
        Node* newNode = new Node{item, topPtr};
        topPtr = newNode;
    }

    void Pop() {
        if (IsEmpty())
            throw std::underflow_error("Stack is empty.");
        Node* temp = topPtr;
        topPtr = topPtr->next;
        delete temp;
    }

    int Top() const {
        if (IsEmpty())
            throw std::underflow_error("Stack is empty.");
        return topPtr->data;
    }

    // Friend declaration for Identical
    friend bool Identical(const StackType& stack1, const StackType& stack2);
};

// Declaration only (no implementation)
bool Identical(StackType stack1, StackType stack2){
    while(!stack1.IsEmpty()&& !stack2.IsEmpty()){
        if(stack1.Top()==stack2.Top()){
            stack1.Pop();
            stack2.Pop();
        }else{
            return false;
        }
    }
    if(stack1.IsEmpty()&&stack2.IsEmpty()){
        return true;
    }else{
        return false;
    }
}
