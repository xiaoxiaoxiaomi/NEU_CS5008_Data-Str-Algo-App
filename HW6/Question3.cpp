#include <iostream>

using namespace std;

int binarySearch(int list[], int l, int r, int item);

int main() {
  int arr[] = {1, 3, 4, 6, 10, 15, 18, 22, 26, 30};
  int length = sizeof(arr) / sizeof(arr[0]);
  cout << binarySearch(arr, 0, length-1, 22) << endl;
  cout << binarySearch(arr, 0, length-1, 11) << endl;
  return 0;
}

int binarySearch(int list[], int l, int r, int item) {
  if (r >= l) {
    int mid = (l + r) / 2;
    if (list[mid] == item) {
      return mid;
    }
    if (list[mid] > item) {
      return binarySearch(list, l, mid - 1, item);
    } else {
      return binarySearch(list, mid + 1, r, item);
    }
  }
  return -1;
}