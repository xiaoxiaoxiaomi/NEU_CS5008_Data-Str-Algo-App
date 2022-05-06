#ifndef STACK_H
#define STACK_H

#pragma once

#include <iostream>

using namespace std;

class Stack
{
public:
  Stack();
  void push(int i);
  bool pop();
  bool empty();
  int top();
  bool full();
  ~Stack();

private:
  int list[10];
  int length;
};

#endif