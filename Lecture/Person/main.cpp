#include <iostream> 
#include <stack> 
#include "Person.h" 
#include "PersonImp.cpp"

using namespace std;

int main() {
  stack<Person> S;

  Person P1;
  P1.print();

  Person P2("X", "Y", "Z");
  Person P3("A", "B", "C");

  S.push(P1);
  S.push(P2);
  S.push(P3);

  // S.top().print();
  cout << S.top();
  cout << endl;

  Person P4;
  cin >> P4;
  cout << P4;

  cout << endl;
}