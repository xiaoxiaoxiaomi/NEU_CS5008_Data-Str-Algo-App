#include <map>

#include "Person.cpp"
#include "Date.cpp"

using namespace std;

int main()  {
  // Declaring a map object
  map<Person, Date> myMap;

  // Creating instances of Person
	Person p1("Htet", "Htet", "Win");
	Person p2("Ang", "Wan", "Xin");
	Person p3("A", "B", "C");
	Person p4("D", "E", "F");

  // Creating instances of Date
  Date d1(1, 2, 14);
	Date d2(2, 12, 8);
	Date d3(3, 10, 12);
	Date d4(4, 1, 9);

  // Inserting values into map called myMap
	myMap.insert(pair<Person, Date>(p1, d1));
	myMap.insert(pair<Person, Date>(p2, d2));
	myMap.insert(pair<Person, Date>(p3, d3));
	myMap.insert(pair<Person, Date>(p4, d4));

  // Defining an iterator called "it"
	map<Person, Date>::iterator it;

  // Displaying the map
	for (it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << it->first<< ": " 
			<< it->second << '\n';
	}

	cout << myMap[p3] << endl;

  return 0;
}