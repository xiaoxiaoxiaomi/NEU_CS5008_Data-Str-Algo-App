#ifndef TIME_H
#define TIME_H

#pragma once

class Time
{
public:
    Time();
    Time(int h, int m, int s);
    Time(int h, int m);

    void setHour(int h);
    void setMin(int m);
    void setSec(int s);
    void setTime(int h, int m, int s);

    int getHour() const;
    int getMin() const;
    int getSec() const;

    void print() const;

    int incrementSeconds();
    int incrementMinutes();
    int incrementHours();

    bool equalTime(const Time&) const;// pass by reference - pointing to the data

    ~Time();
private:
    int hour;
    int mins;
    int secs;
};

#endif