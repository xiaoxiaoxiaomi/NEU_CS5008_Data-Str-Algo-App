#include <iostream> 
#include <string> 
#include "Person.h"

using namespace std;

//Default constructor 
Person::Person() {
  firstName = "John"; 
  middleName ="Jill"; 
  lastName = "James";
}
Person::Person(string fn, string mn, string ln) { 
  firstName = fn;
  middleName = mn; 
  lastName = ln;
}
void Person::setFirstName(string fn) { 
  firstName = fn;
}
void Person::setMiddleName(string mn) { 
  middleName = mn;
}
void Person::setLastName(string ln) { 
  lastName = ln;
}
void Person::setFullName(string fn, string mn, string ln) { 
  firstName = fn;
  middleName = mn; 
  lastName = ln;
}
string Person::getFirstName() { 
  return firstName;
}
string Person::getMiddleName() { 
  return middleName;
}
string Person::getLastName() { 
  return lastName;
}

void Person::print() const {
  cout << "Name is " << firstName << " " << middleName << " " << lastName << endl;
}

ostream& operator << (ostream& osObject, const Person& person) {
  osObject << person.firstName
  << " " << person.middleName
  << " " << person.lastName;

  return osObject;
}

istream& operator >> (istream& isObject, Person& person) {
  isObject >> person.firstName >> person.middleName >> person.lastName;

  return isObject;
}
