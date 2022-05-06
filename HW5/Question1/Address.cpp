#include "Address.h"

using namespace std;

Address::Address()
{
  unit = 0;
  floor = 0;
  block = 0;
  street = "street";
  city = "city";
  country = "country";
  postalCode = 0;
}

Address::Address(int un, int fl, int bl, string st, string ci, string co, int po) {
  unit = un;
  floor = fl;
  block = bl;
  street = st;
  city = ci;
  country = co;
  postalCode = po;
}

void Address::setUnit(int un) {
  unit = un;
}
void Address::setFloor(int fl) {
  floor = fl;
}
void Address::setBlock(int bl) {
  block = bl;
}
void Address::setStreet(string st) {
  street = st;
}
void Address::setCity(string ci) {
  city = ci;
}
void Address::setCountry(string co) {
  country = co;
}
void Address::setPostalCode(int po) {
  postalCode = po;
}

int Address::getUnit() const {
  return unit;
}
int Address::getFloor() const {
  return floor;
}
int Address::getBlock() const {
  return block;
}
string Address::getStreet() const {
  return street;
}
string Address::getCity() const {
  return city;
}
string Address::getCountry() const {
  return country;
}
int Address::getPostalCode() const {
  return postalCode;
}

void Address::print() const {
  cout << "unit " << unit << ", "
    << "floor " << floor << ", "
    << "block " << block << ", "
    << street << ", "
    << city << ", "
    << country << ", "
    << postalCode;
}

// ostream operator
ostream& operator << (ostream& osObject, const Address& address1)
{
	osObject << address1.unit
		<< " " << address1.floor
		<< " " << address1.block
    << " " << address1.street
    << " " << address1.city
    << " " << address1.country
    << " " << address1.postalCode;

	return osObject;
}

istream& operator >> (istream& isObject, Address& address1)
{
	isObject >> address1.unit >> address1.floor >> address1.block >> address1.street
    >> address1.city >> address1.country >> address1.postalCode;

	return isObject;
}

Address::~Address()
{

}