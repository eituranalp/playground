#include "TreeType.h"

TreeType::TreeType() {
    root = nullptr;
}

int TreeType::CountNodes(TreeNode* tree) const {
    if (tree == nullptr)
        return 0;
    else
        return CountNodes(tree->left) + CountNodes(tree->right) + 1;
}

int TreeType::GetLength() const {
    return CountNodes(root);
}

ItemType TreeType::GetItem(ItemType item, bool& found) const {
    Retrieve(root, item, found);
    return item;
}

void TreeType::Retrieve(TreeNode* tree, ItemType& item, bool& found) const {
    if (tree == nullptr) {
        found = false;
    } else {
        Comparison result = item.compareTo(tree->info);
        if (result == LESS)
            Retrieve(tree->left, item, found);
        else if (result == GREATER)
            Retrieve(tree->right, item, found);
        else {
            item = tree->info;
            found = true;
        }
    }
}

void TreeType::Delete(TreeNode*& tree, ItemType item){
    if(tree == nullptr){
        return;     //item not found
    }
    Comparison result = item.compareTo(tree->info);
    if(result == LESS){
        Delete(tree->left,item);
    }else if(result == GREATER){
        Delete(tree->right,item);
    }else{
        DeleteNode(tree);
    }
}

void DeleteNode(TreeNode*& tree){
    TreeNode* tempPtr = tree;
    if(tree->left==NULL){
        tree=tree->right;
        delete tempPtr;
    }else if(tree->right==NULL){
        tree=tree->left;
        delete tempPtr;
    }else{
        //two children
    }
}