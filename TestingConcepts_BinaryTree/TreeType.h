#ifndef TREETYPE_H
#define TREETYPE_H

#include "ItemType.h"

struct TreeNode {
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};

class TreeType {
public:
    TreeType();
    int GetLength() const;
    ItemType GetItem(ItemType item, bool& found) const;
    void PutItem(ItemType item);
    void Delete(TreeNode*& tree, ItemType item);

private:
    TreeNode* root;
    int CountNodes(TreeNode* tree) const;
    void Retrieve(TreeNode* tree, ItemType& item, bool& found) const;
    void Insert(TreeNode*& tree, ItemType item);
    void DeleteNode(TreeNode*& tree);
};

#endif
