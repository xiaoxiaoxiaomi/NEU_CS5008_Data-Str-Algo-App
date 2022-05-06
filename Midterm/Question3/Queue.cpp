#include "Queue.h"

Queue::Queue()
{
  size = 0;
  queueFront = 0;
  queueBack = -1;
}

void Queue::enqueue(int i) {
  if (size == QUEUE_SIZE) {
    cout << "Queue is full" << endl;
  }
  else {
    size++;
    queueBack = (queueBack + 1) % QUEUE_SIZE;
    list[queueBack] = i;
  }
}

void Queue::dequeue() {
  if (size == 0) {
    cout << "Queue is empty" << endl;
  }
  else {
    size--;
    queueFront = (queueFront + 1) % QUEUE_SIZE;
    if (size == 0) {
      queueFront = 0;
      queueBack = -1;
    }
  }
}

bool Queue::full() {
  return size == QUEUE_SIZE;
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