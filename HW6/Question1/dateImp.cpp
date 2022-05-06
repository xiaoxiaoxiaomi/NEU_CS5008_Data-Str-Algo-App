#include "date.h"

// default constructor
date::date() {
	day = 1;
	month = 1;
	year = 2000;
}

// specific constructor
date::date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

// setters
void date::setDay(int d) {
	day = d;
}

void date::setMonth(int m) {
	month = m;
}

void date::setYear(int y) {
	year = y;
}

void date::setDmy(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

// getters
int date::getDay() const {
	return day;
}

int date::getMonth() const {
	return month;
}

int date::getYear() const {
	return year;
}

// printf
void date::print() const {
	cout << day << "/"
		<< month << "/"
		<< year;
}

// ostream operator
ostream& operator << (ostream& osObject, const date& date1) {
	osObject << date1.day
		<< "/" << date1.month
		<< "/" << date1.year;
	return osObject;
}

// istream operator
istream& operator >> (istream& isObject, date& date1) {
	isObject >> date1.day >> date1.month >> date1.year;
	return isObject;
}

// Overloading "equal to" operator
bool date::operator==(const date& otherDate) const {
	if (day == otherDate.day && month == otherDate.month
		&& year == otherDate.year)
		return true;
	else
		return false;
}

// Overloading "not equal to" operator
bool date::operator!=(const date& otherDate) const {
	return !(*this == otherDate);
}

// Overloading "less than or equal to" operator 
bool date::operator<=(const date& otherDate) const {
	return (*this < otherDate || *this == otherDate);
}

// Overloading "less than" operator
bool date::operator<(const date& otherDate) const {
	if ((year < otherDate.year) ||
		(year == otherDate.year && month < otherDate.month) ||
		(year == otherDate.year && month == otherDate.month && day < otherDate.day))
		return true;
	else
		return false;
}

// Overloading "greater than or equal to" operator
bool date::operator>=(const date& otherDate) const {
	return !(*this < otherDate);
}

// Overloading "greater than" operator
bool date::operator>(const date& otherDate) const {
	return !(*this <= otherDate);
}