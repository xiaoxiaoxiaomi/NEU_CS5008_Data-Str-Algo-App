#include <iostream>

using namespace std;

int sequentialSearch(int list[], int length, int item);

int main() {
  int arr[] = {5, 8, 11, 22, 10, 2, 9, 30};
  int length = sizeof(arr) / sizeof(arr[0]);
  cout << sequentialSearch(arr, length, 9) << endl;
  cout << sequentialSearch(arr, length, 6) << endl;
  return 0;
}

int sequentialSearch(int list[], int length, int item) {
  int loc = 0;
  while (loc < length) {
    if (list[loc] == item) {
      return loc;
    }
    loc ++;
  }
  return -1;
}