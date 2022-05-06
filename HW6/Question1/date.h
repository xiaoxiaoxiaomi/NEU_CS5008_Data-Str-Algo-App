#ifndef H_date
#define H_date

#include <iostream>

using namespace std;

class date {
	
	friend ostream& operator << (ostream&, const date&); // method overloading
	friend istream& operator >> (istream&, date&);

public:

	// default constructor
	date();

	// specific constructor
	date(int d, int m, int y);

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
	bool operator<(const date& otherDate) const;
	bool operator>(const date& otherDate) const;
	bool operator==(const date& otherDate) const;
	bool operator<=(const date& otherDate) const;
	bool operator>=(const date& otherDate) const;
	bool operator!=(const date& otherDate) const;

	// Overloading math operations
	date operator++();
	date operator++(int);
	date operator--();
	date operator--(int);

private:

	// data members
	int day;
	int month;
	int year;
};

#endif