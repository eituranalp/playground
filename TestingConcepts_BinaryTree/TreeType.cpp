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
        return;     // Item not found; do nothing
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

void TreeType::DeleteNode(TreeNode*& tree) {
    TreeNode* tempPtr;

    if (tree->left == nullptr) {
        tempPtr = tree;
        tree = tree->right;
        delete tempPtr;
    }
    else if (tree->right == nullptr) {
        tempPtr = tree;
        tree = tree->left;
        delete tempPtr;
    }
    else {
        // Node has two children: find inorder successor (leftmost node in right subtree)
        TreeNode* successorParent = tree;
        TreeNode* successor = tree->right;

        // Find the leftmost node in right subtree
        while (successor->left != nullptr) {
            successorParent = successor;
            successor = successor->left;
        }

        // Copy successor's value into current node
        tree->info = successor->info;

        // Recursively delete successor node
        if (successorParent->left == successor)
            Delete(successorParent->left, successor->info);
        else
            Delete(successorParent->right, successor->info);
    }
}
void TreeType::PutItem(ItemType item) {
    Insert(root, item);
}
void TreeType::Insert(TreeNode*& tree, ItemType item) {
    if (tree == nullptr) {
        tree = new TreeNode;
        tree->info = item;
        tree->left = nullptr;
        tree->right = nullptr;
    } else {
        Comparison result = item.compareTo(tree->info);
        if (result == LESS)
            Insert(tree->left, item);
        else
            Insert(tree->right, item);
    }
}
//checking