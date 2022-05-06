#include <map>

#include "Person.cpp"
#include "Address.cpp"

using namespace std;

int main() {
  map<Person, Address> myMap;

  Person p1("Htet", "Htet", "Win");
	Person p2("Ang", "Wan", "Xin");
	Person p3("A", "B", "C");
	Person p4("D", "E", "F");

  Address a1(201, 2, 4663, "Cambridge Drive", "Phoenix", "US", 85003);
  Address a2(309, 3, 4980, "Shady Pines Drive", "Paducah", "US", 42001);
  Address a3(422, 4, 3900, "Railroad Street", "Marquette", "US", 49855);
  Address a4(517, 5, 4049, "Bernardo Street", "Batesville", "US", 47006);

  myMap.insert(pair<Person, Address>(p1, a1));
  myMap.insert(pair<Person, Address>(p2, a2));
  myMap.insert(pair<Person, Address>(p3, a3));
  myMap.insert(pair<Person, Address>(p4, a4));

  map<Person, Address>::iterator it;

  for (it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << it->first<< ": " << it->second << '\n';
	}

  cout << myMap[p1] << endl;

  return 0;
}