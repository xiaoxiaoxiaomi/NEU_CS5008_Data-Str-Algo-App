#include<iostream>

using namespace std;

int main() {
  int populationA, populationB;
  double growthA, growthB;
  int year = 0;

  cout << "Enter the population of town A: ";
  cin >> populationA;

  cout << "Enter the population of town B(more than that of town A): ";
  cin >> populationB;

  cout << "Enter the growth rate of town A: ";
  cin >> growthA;

  cout << "Enter the growth rate of town B(less than that of town B): ";
  cin >> growthB;

  while (populationA < populationB) {
    populationA *= (1 + 0.01 * growthA);
    populationB *= (1 + 0.01 * growthB);
    year += 1;
  }

  cout << "The population of town A will be greater than or equal to the population of town B after " << year << " year(s)" << endl;
  cout << "The population of town A at that time: " << populationA << endl;
  cout << "The population of town B at that time: " << populationB << endl;
}