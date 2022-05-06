#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<string> flowerStack;

  while (true) {
    char continueFlag;
    cout << "Enter Y if you want to enter a flower name, otherwise, enter any other key to exit: ";
    cin >> continueFlag;
    if (continueFlag != 'Y')
      break;
    string flowerName;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter a flower name: ";
    getline(cin, flowerName);
    flowerStack.push(flowerName);
  }

  cout << endl << "Output the flower name in the reverse order" << endl;
  while(!flowerStack.empty()) {
    cout << flowerStack.top() << " ";
    flowerStack.pop();
  }
  cout << endl;

  return 0;
}