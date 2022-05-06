#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date
{
  friend ostream& operator << (ostream&, const Date&);
  friend istream& operator >> (istream&, Date&);
public:
  // default constructor
  Date();

  // specific constructor
  Date(int d, int m, int y);

  // setters
  void setDay(int d);
  void setMonth(int m);
  void setYear(int y);
  void setDmy(int d, int m, int y);

  // getters
  int getDay() const;
  int getMonth() const;
  int getYear() const;

  // printf
  void print() const;

  // Overloading operators
  bool operator<(const Date& otherDate) const;
  bool operator>(const Date& otherDate) const;
  bool operator==(const Date& otherDate) const;
  bool operator<=(const Date& otherDate) const;
  bool operator>=(const Date& otherDate) const;
  bool operator!=(const Date& otherDate) const;

  // Overloading math operations
  Date operator++();
  Date operator++(int);
  Date operator--();
  Date operator--(int);

  ~Date();

private:
  int day;
  int month;
  int year;
};

#endif