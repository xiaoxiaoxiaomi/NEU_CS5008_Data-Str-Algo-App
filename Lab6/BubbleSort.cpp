#include <iostream>

using namespace std;

void bubbleSort(int list[], int length);

int main() {
  int arr[] = {9, 3, 6, 7, 5, 4, 2, 1, 0, 8};
  int length = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, length);
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

void bubbleSort(int list[], int length) {
  for (int i = length-1; i > 0; i--) {
    for (int j = 0; j < i; j ++) {
      if (list[j] > list[j+1]) {
        int tmp = list[j+1];
        list[j+1] = list[j];
        list[j] = tmp;
      }
    }
  }
}