#include "dayType.h"
#include "dayType.cpp"

int main() {
  string s;
  cout << "Enter a day: ";
  cin >> s;

  dayType myDay;

  myDay.setDay(s);

  myDay.printDay();

  cout << "The day: " << myDay.getDay() << endl;
  cout << "The next day: " << myDay.getNextDay() << endl;
  cout << "The previous day: " << myDay.getPreviousDay() << endl;

  int n;
  cout << "Enter a number of days to add: ";
  cin >> n;

  cout << "The day after " << n << " day(s) is " << myDay.addDays(n) << endl;
}