#include<iostream>

using namespace std;

const double TAX_RATE = 0.14;

int main() {
  double payRate;
  double hoursPerWeek;

  cout << "Enter the pay rate for an hour: ";
  cin >> payRate;
  cout << "Enter the number of hours you worked each week: ";
  cin >> hoursPerWeek;

  double incomeBeforeTaxes;
  double incomeAfterTaxes;
  incomeBeforeTaxes = payRate * hoursPerWeek * 5;
  cout << "Your income before taxes: " << incomeBeforeTaxes << endl;
  incomeAfterTaxes = incomeBeforeTaxes * (1 - TAX_RATE);
  cout << "Your income after taxes: " << incomeAfterTaxes << endl;

  double money;
  cout << "The money you spend on clothes and other accessories: " << incomeAfterTaxes * 0.1 << endl;
  cout << "The money you spend on school supplies: " << incomeAfterTaxes * 0.01 << endl;
  money = incomeAfterTaxes * (1 - 0.1 - 0.01);

  cout << "The money you spend to buy savings bonds: " << money * 0.25 << endl;
  cout << "The money your parents spend to buy additional savings bonds for you: " << money * 0.25 * 0.5 << endl;
}