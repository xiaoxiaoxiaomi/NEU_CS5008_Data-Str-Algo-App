#ifndef QUEUE_H
#define QUEUE_H

#pragma once

#include <iostream>

using namespace std;

const int QUEUE_SIZE = 10;

class Queue
{
public:
  Queue();
  void enqueue(int i);
  void dequeue();
  bool full();
  bool empty();
  int front();
  int back();
  ~Queue();

private:
  int size;
  int list[QUEUE_SIZE];
  int queueFront;
  int queueBack;
};

#endif