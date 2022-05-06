#include <iostream>

using namespace std;

int binarySearch(int list[], int length, int item);

int main() {
  int arr[] = {1, 3, 4, 6, 10, 15, 18, 22, 26, 30};
  int length = sizeof(arr) / sizeof(arr[0]);
  cout << binarySearch(arr, length, 22) << endl;
  cout << binarySearch(arr, length, 11) << endl;
  return 0;
}

int binarySearch(int list[], int length, int item) {
  int left = 0;
  int right = length - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (list[mid] == item) {
      return mid;
    } else if (list[mid] < item) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}