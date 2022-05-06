#include<iostream>

using namespace std;

int main() {
  int number;
  int primeList[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  bool isPrime = true;

  cout << "Enter a positive integer between 1 and 1000: ";
  cin >> number;

  if (number == 1) {
    isPrime = false;
  }

  for (int i = 0; i < 11; i++) {
    if (number % primeList[i] == 0) {
      isPrime = false;
      cout << primeList[i] << endl;
    }
  }
  if (isPrime) {
    cout << "The number is prime." << endl;
  } else {
    cout << "The number is not prime." << endl;
  }
}