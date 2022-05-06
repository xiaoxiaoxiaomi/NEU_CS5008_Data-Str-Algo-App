#include "Person.h"

using namespace std;

// default constructor
Person::Person()
{
	firstName = "firstName";
	middleName = "middleName";
	lastName = "lastName";
}

// specific constructor
Person::Person(string fn, string mn, string ln)
{
	firstName = fn;
	middleName = mn;
	lastName = ln;
}

// setters
void Person::setFirstName(string fn)
{
	firstName = fn;
}

void Person::setMiddleName(string mn)
{
	middleName = mn;
}

void Person::setLastName(string ln)
{
	lastName = ln;
}

void Person::setName(string fn, string mn, string ln)
{
	firstName = fn;
	middleName = mn;
	lastName = ln;
}

// getters
string Person::getFirstName() const
{
	return firstName;
}

string Person::getMiddleName() const
{
	return middleName;
}

string Person::getLastName() const
{
	return lastName;
}

//printf
void Person::print() const
{
	cout << firstName << " "
		<< middleName << " "
		<< lastName << " ";
}

// ostream operator
ostream& operator << (ostream& osObject, const Person& person1)
{
	osObject << person1.firstName
		<< " " << person1.middleName
		<< " " << person1.lastName;

	return osObject;
}

istream& operator >> (istream& isObject, Person& person1)
{
	isObject >> person1.firstName >> person1.middleName >> person1.lastName;

	return isObject;
}

// Overloading "equal to" operator
bool Person::operator==(const Person& otherPerson) const
{
	if (firstName == otherPerson.firstName && middleName == otherPerson.middleName
		&& lastName == otherPerson.lastName)
		return true;
	else
		return false;
}

// Overloading "not equal to" operator
bool Person::operator!=(const Person& otherPerson) const
{
	return !(*this == otherPerson);
}

// Overloading "less than or equal to" operator 
bool Person::operator<=(const Person& otherPerson) const
{
	return (*this < otherPerson || *this == otherPerson);
}

// Overloading "less than" operator
bool Person::operator<(const Person& otherPerson) const
{
	if ((lastName < otherPerson.lastName) ||
		(lastName == otherPerson.lastName && middleName < otherPerson.middleName) ||
		(lastName == otherPerson.lastName && middleName == otherPerson.middleName && firstName < otherPerson.firstName))
		return true;
	else
		return false;
}

// Overloading "greater than or equal to" operator
bool Person::operator>=(const Person& otherPerson) const
{
	return !(*this < otherPerson);
}

// Overloading "greater than" operator
bool Person::operator>(const Person& otherPerson) const
{
	return !(*this <= otherPerson);
}

Person::~Person()
{

}