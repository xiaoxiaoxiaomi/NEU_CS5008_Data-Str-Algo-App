#include "Stack.h"

Stack::Stack()
{
  length = 0;
}

void Stack::push(int i) {
  if (!full())
    list[length++] = i;
  else 
    cout << "Stack is full" << endl;
}

bool Stack::pop() {
  if (empty()) {
    cout << "Stack is empty" << endl;
    return false;
  }
  length--;
  return true;
}

bool Stack::empty() {
  return length == 0;
}

int Stack::top() {
  assert(!empty());
  return list[length-1];
}

bool Stack::full() {
  return length == 10;
}

Stack::~Stack()
{

}