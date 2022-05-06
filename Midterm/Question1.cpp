#include <iostream>

using namespace std;

const double PROFIT_RATE = 0.1;
const double SALE_RATE = 0.15;

int main() {

  double totalCostOfMerchandise;
  cout << "Enter the total cost of the merchandise: ";
  cin >> totalCostOfMerchandise;

  double salaryOfEmployees;
  cout << "Enter the salary of the employees (including your own salary): ";
  cin >> salaryOfEmployees;

  double yearlyRent;
  cout << "Enter the yearly rent: ";
  cin >> yearlyRent;

  double estimatedElectricityCost;
  cout << "Enter the estimated electricity cost: ";
  cin >> estimatedElectricityCost;

  double totalCost = totalCostOfMerchandise + salaryOfEmployees + yearlyRent + estimatedElectricityCost;

  double merchandise;
  merchandise = (1 + PROFIT_RATE) * totalCost / (1 - SALE_RATE);

  cout << "The merchandise should be marked up as: " << merchandise << endl;

  return 0;
}