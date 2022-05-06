#include "Queue.h"

Queue::Queue()
{
  size = 0;
  queueFront = 0;
  queueBack = -1;
}

void Queue::enqueue(int i) {
  if (size == 10) {
    cout << "Queue is full" << endl;
  }
  else {
    size++;
    queueBack = (queueBack+1) % 10;
    list[queueBack] = i;
  }
}

void Queue::dequeue() {
  if (size == 0) {
    cout << "Queue is empty" << endl;
  }
  else {
    size--;
    queueFront = (queueFront+1) % 10;
    if (size == 0) {
      queueFront = 0;
      queueBack = -1;
    }
  }
}

bool Queue::full() {
  return size == 10;
}

bool Queue::empty() {
  return size == 0;
}

int Queue::front() {
  return list[queueFront];
}

int Queue::back() {
  return list[queueBack];
}

Queue::~Queue()
{

}