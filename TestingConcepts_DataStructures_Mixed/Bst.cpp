#include "Bst.h"
#include <iostream>

BST::BST():root(nullptr){}
void BST::putItem(ItemType& item){
    putItemHelper(root,item);
}
void BST::putItemHelper(Node*& tree, ItemType& item){
    if(tree==nullptr){  //if node doesn't exist, create a leaf node
        tree= new Node{item,nullptr,nullptr};
    }else{
        Comparison result = item.compareTo(tree->data);
        if(result==LESS){
            putItemHelper(tree->left, item);
        }else{
            putItemHelper(tree->right, item);
        }
    }
}
void BST::deleteItem(ItemType& item){
    deleteItemHelper(root, item);
}
void BST::deleteItemHelper(Node*& tree, ItemType& item){
    if(tree==nullptr){  //item not found
        //do nothing
    }else{
        Comparison result = item.compareTo(tree->data);
        if(result == LESS){
            deleteItemHelper(tree->left, item);
        }else if(result == GREATER){
            deleteItemHelper(tree->right, item);
        }else if(result == EQUAL){
            //delete the item
            if(tree->right==nullptr){
                Node* temp = tree;
                tree = tree->left;
                delete temp;
            }else if(tree->left==nullptr){
                Node* temp = tree;
                tree = tree->right;
                delete temp;
            }else{
                //two children, 
                Node* successor = tree->right;
                while (successor->left != nullptr) {
                    successor = successor->left;
                }
                tree->data = successor->data;
                deleteItemHelper(tree->right, successor->data);
            }
        }
    }
}
void BST::print(){
    printHelper(root);
    std::cout << std::endl;
}

void BST::printHelper(Node* tree){
    if (tree != nullptr) {
        printHelper(tree->left);
        tree->data.print();
        std::cout << " ";
        printHelper(tree->right);
    }
}

int BST::numberOfLeafNodes(BST* tree){
    return numberOfLeafNodesHelper(tree->root);
}
int BST::numberOfLeafNodesHelper(Node* tree){
    if(tree==nullptr){
        return 0;
    }
    if(tree->right==nullptr && tree->left ==nullptr){
        return 1;
    }else{
        return numberOfLeafNodesHelper(tree->left) + numberOfLeafNodesHelper(tree->right);
    }
}