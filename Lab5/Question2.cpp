#include <iostream>

using namespace std;

int factorial(int n);

void fibonacci(int n, int fib[]);

int main() {
  int n;
  cout << "Enter a number n: ";
  cin >> n;
  cout << "n! = " << factorial(n) << endl;
  int length;
  
  cout << "Enthe the length of the Fibonacci sequence you want to print: ";
  cin >> length;
  int fib[length];
  fibonacci(length, fib);
  for (int i=0; i < length; i++) {
    cout << fib[i] << " ";
  }
  cout << endl;

  return 0;
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

void fibonacci(int n, int fib[]) {
  if (n == 0 || n == 1) {
    fib[n] = n;
  } else {
    fibonacci(n-1, fib);
    fibonacci(n-2, fib);
    fib[n] = fib[n-1] + fib[n-2];
  }
}