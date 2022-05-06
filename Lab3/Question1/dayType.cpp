#include <iostream> 
#include "dayType.h"

using namespace std;

dayType::dayType() {
  cout << "Object is being created" << endl;
}

dayType::dayType(string s) {
  day = s;
}

void dayType::setDay(string s) {
  day = s;
}

void dayType::printDay() {
  cout << "The day: " << day << endl;
}

string dayType::getDay() {
  return day;
}

string dayType::getNextDay() {
  return addDays(1);
}

string dayType::getPreviousDay() {
  return addDays(-1);
}

string dayType::addDays(int n) {
  int dayIndex = 0;
  for (int i=0; i < DAYS_PER_WEEK; i++) {
    if (WEEK[i] == day)
      dayIndex = i;
  }
  return WEEK[(dayIndex+n+DAYS_PER_WEEK) % DAYS_PER_WEEK];
}

dayType::~dayType() {
  cout << "Object is being deleted" << endl;
}