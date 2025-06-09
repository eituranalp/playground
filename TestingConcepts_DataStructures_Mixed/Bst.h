#ifndef BST_H
#define BST_H
#include "ItemType.h"
struct Node{
    ItemType data;
    Node* left;
    Node* right;
};
class BST{
    private:
        Node* root;
        void putItemHelper(Node*& tree, ItemType& item);
        void deleteItemHelper(Node*& tree, ItemType& item);
        void printHelper(Node* tree);
        int numberOfLeafNodesHelper(Node* tree);
    public:
        BST();
        //~BST();

        void putItem(ItemType& item);
        void deleteItem(ItemType& item);
        void print();
        int numberOfLeafNodes(BST* tree);
};


#endif