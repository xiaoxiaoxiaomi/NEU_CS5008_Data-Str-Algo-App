#include "Queue.cpp"

int main() {
  Queue myQueue;

  myQueue.enqueue(1);
  myQueue.enqueue(2);
  myQueue.enqueue(3);

  cout << "The first element of the queue: " << myQueue.front() << endl;
  cout << "The last element of the queue: " << myQueue.back() << endl;

  for (int i = 0; i < 3; i++) {
    cout << myQueue.front() << " ";
    myQueue.dequeue();
  }

  cout << endl << "Whether the queue is empty(1 for true, 0 for false): " << myQueue.empty() << endl;

  for (int i = 0; i < 10; i++) {
    myQueue.enqueue(i);
  }

  cout << "Whether the queue is full(1 for true, 0 for false): " << myQueue.full() << endl;

  return 0;
}