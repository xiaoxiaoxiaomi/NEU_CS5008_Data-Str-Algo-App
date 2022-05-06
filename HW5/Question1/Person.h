#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
  friend ostream& operator << (ostream&, const Person&);
  friend istream& operator >> (istream&, Person&);

public:
  // default constructor
  Person();

  // specific constructor
  Person(string fn, string mn, string ln);

  // setters
  void setFirstName(string fn);
  void setMiddleName(string mn);
  void setLastName(string ln);
  void setName(string fn, string mn, string ln);

  //getters
  string getFirstName() const;
  string getMiddleName() const;
  string getLastName() const;

  // Overloading operators
  bool operator<(const Person& otherPerson) const;
  bool operator>(const Person& otherPerson) const;
  bool operator==(const Person& otherPerson) const;
  bool operator<=(const Person& otherPerson) const;
  bool operator>=(const Person& otherPerson) const;
  bool operator!=(const Person& otherPerson) const;

  // printf
  void print() const;

  ~Person();

protected:
  string firstName;
  string middleName;
  string lastName;
};

#endif