#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

using namespace std;

const int DAYS_PER_WEEK = 7;
const string WEEK[DAYS_PER_WEEK] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

class dayType {

public:
  dayType();
  dayType(string s);

  void setDay(string s);

  void printDay(void);

  string getDay(void);
  string getNextDay(void);
  string getPreviousDay(void);

  string addDays(int n);

  ~dayType();

private:
  string day;
};

#endif