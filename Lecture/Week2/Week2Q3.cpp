#include<iostream>
#include <iomanip>

using namespace std;

void selectionSort(int arr[], int length);

int main() {
  int arr[10];
  int sum = 0;

  cout << "Enter 10 numbers." << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Enter the number: ";
    cin >> arr[i];
    sum += arr[i];
  }

  double avg = sum / 10.0;
  cout << "Average: " << setprecision(2) << avg << endl;
  for (int i = 0; i < 10; i++) {
    if (arr[i] > avg) {
      cout << arr[i] << " ";
    }
  }
  cout << endl;

  selectionSort(arr, 10);

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

void selectionSort(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    int id = i;
    for (int j = i; j < length; j++) {
      if (arr[j] < arr[id]) {
        id = j;
      }
    }
    if (id != i) {
      int temp = arr[i];
      arr[i] = arr[id];
      arr[id] = temp;
    }
  }
}