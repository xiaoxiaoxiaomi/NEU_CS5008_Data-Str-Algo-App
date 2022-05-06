#include <iostream>
#include "BST.cpp"

using namespace std;

int main() {
  char choice;
  BST bst;
  while (true) {
    cout << "a. Search a dateType object in the BST" << endl;
    cout << "b. Add a dateType object to the BST" << endl;
    cout << "c. Remove a dateType object from the BST" << endl;
    cout << "d. Display all dateType objects stored in ascending order of the date values" << endl;
    cout << "Enter a to d to execute operations, enter any other key to exit: ";
    cin >> choice;
    if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
      break;
    }
    switch (choice) {
      case 'a': {
        int d, m, y;
        cout << "Enter day month year: ";
        cin >> d >> m >> y;
        date searchDate(d, m, y);
        if (bst.search(searchDate)) {
          cout << "It exists" << endl;
        } else {
          cout << "It does not exist" << endl;
        }
        break;
      }
      case 'b': {
        int d, m, y;
        cout << "Enter day month year: ";
        cin >> d >> m >> y;
        date addDate(d, m, y);
        bst.add(addDate);
        break;
      }      
      case 'c': {
        int d, m, y;
        cout << "Enter day month year: ";
        cin >> d >> m >> y;
        date removeDate(d, m, y);
        bst.remove(removeDate);
        break;
      }
      case 'd': {
        bst.inorderTraversal();
        break;
      }
      default:
        break;
    }
  }
}