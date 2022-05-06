#include<iostream>

using namespace std;

int main() {
  double alpha[50];

  for (int i = 0; i < 25; i++) {
    alpha[i] = (double)i * (double)i;
  }
  for (int i = 25; i < 50; i++) {
    alpha[i] = (double)i * 3;
  }
  
  for (int j = 0; j < 50; j++) {
    cout << alpha[j] << " ";
    if ((j+1) % 10 == 0) {
      cout << endl;
    }
  }

  return 0;
}