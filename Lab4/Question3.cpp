#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  string input;
  stack<double> numberStack;
  double leftNumber, rightNumber, result;
  cout << "4-function calculator, enter q to quit" << endl;
  while(true) {
    cout << ":";
    cin >> input;
    if (input == "q") break;
    if (input == "+" || input == "-" || input == "*" || input == "/") {
      rightNumber = numberStack.top();
      numberStack.pop();
      leftNumber = numberStack.top();
      numberStack.pop();
      if (input == "+") result = leftNumber + rightNumber;
      if (input == "-") result = leftNumber - rightNumber;
      if (input == "*") result = leftNumber * rightNumber;
      if (input == "/") result = leftNumber / rightNumber;
      numberStack.push(result);
      cout << result << endl;
    }
    else
      numberStack.push(stod(input));
  }

  return 0;
}