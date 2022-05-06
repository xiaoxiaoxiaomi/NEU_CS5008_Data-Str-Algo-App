#include <iostream>

using namespace std;

struct nodeType {
  int info;
  nodeType *link;
};

int main() {
  nodeType *head, *p, *q, *newNode, *first, *last, *current;
  first = nullptr;
  last = nullptr;

  int num;
  cout << "Enter a number to enter into the linked list" << endl;
  cin >> num;

  while (num != -999) {
    newNode = new nodeType;
    newNode->info = num;
    newNode->link = nullptr;
    if (first == nullptr) {
      first = newNode;
      last = newNode;
    } else {
      last->link = newNode;
      last = newNode;
    }
    cout << "Enter a number to enter into the linked list" << endl;
    cin >> num;
  }
  current = first;
  while (current != nullptr) {
    cout << current->info << " ";
    current = current->link;
  }
  cout << endl;
}