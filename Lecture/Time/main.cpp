#include<iostream>
#include "Time.h"
#include "Time.cpp"

using namespace std;

int main() {
  Time T1;
  T1.print();

  Time T2(2, 4, 5);
  T2.print();

  Time T3(23, 59, 59);
  T3.incrementSeconds();
  T3.print();

  Time T4(2, 4, 5);
  cout << T2.equalTime(T4) << endl;

  return 0;
}