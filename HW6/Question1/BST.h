#ifndef BST_H
#define BST_H

#include <iostream>
#include "dateImp.cpp"

using namespace std;

struct TreeNode {
  date val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(date()), left(nullptr), right(nullptr) {}
  TreeNode(date d) : val(d), left(nullptr), right(nullptr) {}
};

class BST {

public:
  BST();
  bool search(date d);
  void add(date d);
  void remove(date d);
  void inorderTraversal();

private:
  TreeNode *root;
};

#endif