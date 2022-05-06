#include <iostream>
#include <stack>

using namespace std;

int main() {

  stack<int> S1;
  stack<char> S2;
  int num;
  char sym;

  for (int i=0; i < 5; i++) {
    cout << "Enter an integer value" << endl;
    cin >> num;
    S1.push(num);

    cout << "Enter a char value" << endl;
    cin >> sym;
    S2.push(sym);
  }

  while(!S1.empty()) {
    cout << S1.top() << " ";
    S1.pop();
  }
  cout << endl;

  while(!S2.empty()) {
    cout << S2.top() << " ";
    S2.pop();
  }
  cout << endl;

  return 0;
}