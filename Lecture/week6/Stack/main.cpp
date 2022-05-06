#include "Stack.cpp"

int main() {
  Stack myStack;
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);
  myStack.push(40);

  for (int i=0; i < 4; i++) {
    cout << myStack.top() << endl;
    myStack.pop();
  }
  return 0;
}