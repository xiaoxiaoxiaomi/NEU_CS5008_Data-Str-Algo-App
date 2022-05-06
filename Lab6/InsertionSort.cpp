#include <iostream>

using namespace std;

void insertionSort(int list[], int length);

int main() {
  int arr[] = {4, 7, 1, 2, 8, 3, 5, 0, 9, 6};
  int length = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, length);
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

void insertionSort(int list[], int length) {
  for (int i = 1; i < length; i++) {
    int j = i-1;
    int temp = list[i];
    while (j >= 0 && temp < list[j]) {
      list[j+1] = list[j];
      j -= 1;
    }
    list[j+1] = temp;
  }
}