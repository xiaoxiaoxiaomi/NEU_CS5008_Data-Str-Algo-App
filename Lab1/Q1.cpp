#include<iostream>

using namespace std;

const int SECONDS_PER_HOUR = 3600;
const int SECONDS_PER_MINUTE = 60;

int main() {
  int hours;
  int minutes;
  int seconds;

  cout << "Enter the elapsed time in seconds: ";
  cin >> seconds;
  
  hours = seconds / SECONDS_PER_HOUR;
  seconds = seconds % SECONDS_PER_HOUR;

  minutes = seconds / SECONDS_PER_MINUTE;
  seconds = seconds % SECONDS_PER_MINUTE;

  cout << "The elasped time in hours is " << hours << ":" << minutes << ":" << seconds << endl;
  return 0;
}