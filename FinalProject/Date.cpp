#include "Date.h"

#include <string>

using namespace std;

Date::Date() {
  month = 1;
  day = 1;
  year = 2000;
}
Date::Date(int MM, int dd, int yyyy) {
  month = MM;
  day = dd;
  year = yyyy;
}

int Date::GetMonth() const { return month; }
int Date::GetDay() const { return day; }
int Date::GetYear() const { return year; }

void Date::SetMonth(int MM) { month = MM; }
void Date::SetDay(int dd) { day = dd; }
void Date::SetYear(int yyyy) { year = yyyy; }
void Date::SetDate(int MM, int dd, int yyyy) {
  month = MM;
  day = dd;
  year = yyyy;
}

void Date::printDate() { cout << month << "/" << day << "/" << year << endl; }

bool Date::operator==(const Date &otherDate) const {
  if (month == otherDate.month && day == otherDate.day &&
      year == otherDate.year)
    return true;
  else
    return false;
}

istream &operator>>(istream &input, Date &D) {
  string stringMM, stringdd, stringyyyy;
  int MM, dd, yyyy;

  getline(input, stringMM, '/');
  getline(input, stringdd, '/');
  getline(input, stringyyyy, '\n');

  MM = stoi(stringMM);
  dd = stoi(stringdd);
  yyyy = stoi(stringyyyy);

  D.SetDate(MM, dd, yyyy);

  return input;
}
ostream &operator<<(ostream &os, const Date &D) {
  os << D.GetMonth() << "/" << D.GetDay() << "/" << D.GetYear();
  return os;
}
