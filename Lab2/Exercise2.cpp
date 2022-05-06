#include<iostream>

using namespace std;

int reverseDigit(int num);

int main() {
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  cout << "The number with its digits reversed: " << reverseDigit(num) << endl;

  return 0;
}

int reverseDigit(int num) {
  int ans = 0;
  while (num != 0) {
    int remainder = num % 10;
    ans = ans * 10 + remainder;
    num /= 10;
  }
  return ans;
}