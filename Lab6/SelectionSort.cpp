#include <iostream>

using namespace std;

void selectionSort(int list[], int length);

int main() {
  int arr[] = {3, 2, 7, 5, 6, 4, 8, 9, 1, 0};
  int length = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, length);
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}

void selectionSort(int list[], int length) {
  for (int i = 0; i < length - 1; i++) {
    int min = i;
    for (int j = i + 1; j < length; j++) {
      if (list[j] < list[min]) {
        min = j;
      }
    }
    int temp = list[i];
    list[i] = list[min];
    list[min] = temp;
  }
}