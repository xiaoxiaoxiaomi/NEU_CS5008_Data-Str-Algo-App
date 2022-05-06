#include<iostream>
#include "Time.h"

using namespace std;

Time::Time()
{
  hour = 1;
  mins = 1;
  secs = 1;
}

Time::Time(int h, int m, int s)
{
  hour = h;
  mins = m;
  secs = s;
}

Time::Time(int h, int m)
{
  hour = h;
  mins = m;
  secs = 1;
}

void Time::setHour(int h) {
  hour = h;
}

void Time::setMin(int m) {
  mins = m;
}

void Time::setSec(int s) {
  secs = s;
}

void Time::setTime(int h, int m, int s) {
  hour = h;
  mins = m;
  secs = s;
}

int Time::getHour() const {
  return hour;
}

int Time::getSec() const {
  return secs;
}

int Time::getMin() const {
  return mins;
}

void Time::print() const {
  cout << hour << ':' << secs << ':' << mins << endl;
}

int Time::incrementSeconds() {
  if (secs == 59) {
    secs = 0;
    incrementMinutes();
  }
  else
    secs++;
  return secs;
}

int Time::incrementMinutes() {
  if (mins == 59) {
    mins = 0;
    incrementHours();
  }
  else
    mins++;
  return mins;
}

int Time::incrementHours() {
  if (hour == 23)
    hour = 0;
  else
    hour++;
  return hour;
}
bool Time::equalTime(const Time& T2) const {
  if (hour == T2.getHour() && mins == T2.getMin() && secs == T2.getSec()) {
    return true;
  }
  return false;
}

Time::~Time()
{

}