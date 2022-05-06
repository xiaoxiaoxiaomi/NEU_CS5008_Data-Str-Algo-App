#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date {
 public:
  Date();
  Date(int MM, int dd, int yyyy);

  int GetMonth() const;
  int GetDay() const;
  int GetYear() const;

  void SetMonth(int MM);
  void SetDay(int dd);
  void SetYear(int yyyy);
  void SetDate(int MM, int dd, int yyyy);

  void printDate();

  bool operator==(const Date &otherDate) const;

 private:
  int month;
  int day;
  int year;
};

ostream &operator<<(ostream &os, const Date &D);
istream &operator>>(istream &input, Date &D);

#endif
