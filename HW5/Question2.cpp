#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  set<int> mySet1;
  set<int> mySet2;
  int num;
  set<int>::iterator it;

  while(true) {
    string s;
    cout << "Enter a number to set1, enter # to stop: ";
    cin >>  s;
    if (s == "#")
      break;
    mySet1.insert(stoi(s));
  }
  for (it = mySet1.begin(); it != mySet1.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  while(true) {
    string s;
    cout << "Enter a number to set2, enter # to stop: ";
    cin >>  s;
    if (s == "#")
      break;
    mySet2.insert(stoi(s));
  }
  for (it = mySet2.begin(); it != mySet2.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  vector<int>::iterator iter;
  vector<int> v(mySet1.size() + mySet2.size());
  cout << "The intersection of set1 and set2: ";
  iter = set_intersection(mySet1.begin(), mySet1.end(), mySet2.begin(), mySet2.end(), v.begin());
  v.resize(iter-v.begin());  
  for (iter = v.begin(); iter != v.end(); ++iter) {
    cout << *iter << " ";
  }
  cout << endl;

  v.resize(mySet1.size() + mySet2.size()); 
  cout << "The union of set1 and set2: ";
  iter = set_union(mySet1.begin(), mySet1.end(), mySet2.begin(), mySet2.end(), v.begin());
  v.resize(iter-v.begin());  
  for (iter = v.begin(); iter != v.end(); ++iter) {
    cout << *iter << " ";
  }
  cout << endl;

  v.resize(mySet1.size() + mySet2.size()); 
  cout << "The symmetric difference of set1 and set2: ";
  iter = set_symmetric_difference(mySet1.begin(), mySet1.end(), mySet2.begin(), mySet2.end(), v.begin());
  v.resize(iter-v.begin());  
  for (iter = v.begin(); iter != v.end(); ++iter) {
    cout << *iter << " ";
  }
  cout << endl;
}