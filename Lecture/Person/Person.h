#ifndef PERSON_H_INCLUDED 
#define PERSON_H_INCLUDED

#include <string>
using namespace std;

class Person {
  friend ostream& operator << (ostream&, const Person&);
  friend istream& operator >> (istream&, Person&);

public:
  // Default constructor
  Person();
  // Specific constructor
  Person(string fn, string mn, string ln);
  // Mutators or setters
  void setFirstName(string fn);
  void setMiddleName(string mn);
  void setLastName(string ln);
  void setFullName(string fn, string mn, string ln);
  // Accessors or getters 
  string getFirstName(); 
  string getMiddleName(); 
  string getLastName();
  void print() const;

private:
  string firstName;
  string lastName;
  string middleName; 
};

#endif // PERSON_H_INCLUDED