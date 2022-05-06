#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<int> v);

int main() {
  vector<int> v;

  cout << "Store integer data into a STL vector" << endl;
  while (true) {
    string num;
    cout << "Enter an integer, enter q to exit: ";
    cin >> num;
    if (num == "q") {
      break;
    }
    v.push_back(stoi(num));
  }
  show("The contents of v: ", v);

  return 0;
}

void show(const char *msg, vector<int> v) {
  vector<int>::iterator itr;

  cout << msg;
  for (itr=v.begin(); itr != v.end(); itr++)
    cout << *itr << " ";
  cout << endl;
}