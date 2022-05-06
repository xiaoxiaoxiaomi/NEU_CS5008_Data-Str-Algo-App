#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class Address
{
  friend ostream& operator << (ostream&, const Address&);
  friend istream& operator >> (istream&, Address&);

public:
  Address();
  Address(int un, int fl, int bl, string st, string ci, string co, int po);

  void setUnit(int un);
  void setFloor(int fl);
  void setBlock(int bl);
  void setStreet(string st);
  void setCity(string ci);
  void setCountry(string co);
  void setPostalCode(int po);

  int getUnit() const;
  int getFloor() const;
  int getBlock() const;
  string getStreet() const;
  string getCity() const;
  string getCountry() const;
  int getPostalCode() const;

  void print() const;

  ~Address();

private:
  int unit;
  int floor;
  int block;
  string street;
  string city;
  string country;
  int postalCode;

};

#endif