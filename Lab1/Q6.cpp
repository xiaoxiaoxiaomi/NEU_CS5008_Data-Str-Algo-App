#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
  int n;
  int sumOfEven = 0;
  int sumOfOdd = 0;

  cout << "Enter a set of integers: " << endl;
  while (cin >> n) {
    if (n % 2 == 0) {
      sumOfEven += n;
    } else {
      sumOfOdd += n;
    }
    char ch = getchar();
    if (ch == '\n')
      break;
  }
  cout << "The sum of even integers: " << sumOfEven << endl;
  cout << "The sum of odd integers: " << sumOfOdd << endl;
  return 0;
}