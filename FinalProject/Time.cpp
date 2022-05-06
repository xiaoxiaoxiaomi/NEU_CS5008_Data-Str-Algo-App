#include "Time.h"

#include <string>

using namespace std;

Time::Time() {
  hour = 0;
  min = 0;
  sec = 0;
}
Time::Time(int hh, int mm, int ss) {
  hour = hh;
  min = mm;
  sec = ss;
}

int Time::GetHour() const { return hour; }
int Time::GetMin() const { return min; }

int Time::GetSec() const { return sec; }

void Time::SetHour(int hh) { hour = hh; }
void Time::SetMin(int mm) { min = mm; }
void Time::SetSec(int ss) { sec = ss; }
void Time::SetTime(int hh, int mm, int ss) {
  hour = hh;
  min = mm;
  sec = ss;
}

void Time::printTime() { cout << hour << ":" << min << ":" << sec << endl; }

bool Time::operator==(const Time &otherTime) const {
  if (hour == otherTime.hour && min == otherTime.min && sec == otherTime.sec)
    return true;
  else
    return false;
}

istream &operator>>(istream &input, Time &T) {
  string time, sHH, sMM, sSS;
  int position, hh, mm, ss;

  getline(input, sHH, ':');
  getline(input, sMM, ':');
  getline(input, sSS, '\n');

  hh = stoi(sHH);
  mm = stoi(sMM);
  ss = stoi(sSS);

  T.SetHour(hh);
  T.SetMin(mm);
  T.SetSec(ss);

  return input;
}
ostream &operator<<(ostream &os, const Time &T) {
  os << T.GetHour() << ":" << T.GetMin() << ":" << T.GetSec();
  return os;
}
