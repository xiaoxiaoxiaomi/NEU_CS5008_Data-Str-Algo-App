#include "Queue.cpp"

int main() {
  Queue myQueue;
  myQueue.enqueue(10);
  myQueue.enqueue(20);
  myQueue.enqueue(30);
  myQueue.enqueue(40);
  
  for (int i=0; i < 4; i++) {
    cout << myQueue.front() << endl;
    myQueue.dequeue();
  }
  return 0;
}