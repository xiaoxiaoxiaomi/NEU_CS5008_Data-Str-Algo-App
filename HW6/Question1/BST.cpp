#include "BST.h"

BST::BST() {
  root = nullptr;
}

bool searchHelper(TreeNode* node, date d) {
  if (!node) {
    return false;
  }
  if (node->val == d) {
    return true;
  } else if (node->val > d) {
    return searchHelper(node->left, d);
  } else {
    return searchHelper(node->right, d);
  }
}

bool BST::search(date d) {
  return searchHelper(root, d);
}

TreeNode* addHelper(TreeNode* node, date d) {
  if (!node) {
    return new TreeNode(d);
  } 
  if (node->val > d) {
    node->left = addHelper(node->left, d);
  } else {
    node->right = addHelper(node->right, d);
  }
  return node;
}

void BST::add(date d) {
  root = addHelper(root, d);
}

TreeNode* removeHelper(TreeNode* node, date d) {
  if (node) {
    if (d < node->val) {
      node->left = removeHelper(node->left, d);
    } else if (d > node->val) {
      node->right = removeHelper(node->right, d);
    } else {
      if (!node->left && !node->right) {
        return nullptr;
      }
      if (!node->left || !node->right) {
        return node->left ? node->left : node->right;
      } else {
        TreeNode* temp = node->left;
        while (node->right != NULL) { 
          temp = temp->right;
        }
        node->val = temp->val;
        node->left = removeHelper(node->left, temp->val);
      }
    }
  }
  return node;
}

void BST::remove(date d) {
  root = removeHelper(root, d);
}

void inorderHelper(TreeNode* root) {
  if(root) {
    inorderHelper(root->left);
    cout << root->val << endl;
    inorderHelper(root->right);
  }
}

void BST::inorderTraversal() {
  inorderHelper(root);
}