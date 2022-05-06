#include <iostream>
#include <set>

using namespace std;

int main() {
  multiset<int> numberList;
  cout << "Enter a list of integer numbers" << endl;
  char ch = ' ';
  while (ch != '\n') {
    int n;
    cin >> n;
    numberList.insert(n);
    ch = cin.get();
  }

  std::multiset<int>::iterator iter;
  for (iter = numberList.begin(); iter != numberList.end(); iter++) { 
    cout << *iter << ' ';
  }
  cout << endl;

  return 0;
}