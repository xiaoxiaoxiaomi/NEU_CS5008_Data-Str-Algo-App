#include<iostream>

using namespace std;

const double LOW_INCOME_STANDARD = 25000;
const int FREE_CONSULTING_TIME_FOR_LOW_INCOME = 30;
const int FREE_CONSULTING_TIME_FOR_OTHERS = 20;
const double SERVICE_CHARGE_RATE_FOR_LOW_INCOME = 0.4;
const double SERVICE_CHARGE_RATE_FOR_OTHERS = 0.7;
const int MINUTES_PER_HOUR = 60;

double calcBillingAmount(double hourlyRate, int totalConsultingTime, double income);

int main() {
  double hourlyRate;
  int totalConsultingTime;
  double income;

  cout << "Enter the hourly rate: ";
  cin >> hourlyRate;
  
  cout << "Enter the total consulting time in minutes: ";
  cin >> totalConsultingTime;

  cout << "Enter income: ";
  cin >> income;

  cout << "The billing amount: " << calcBillingAmount(hourlyRate, totalConsultingTime, income) << endl;
  
  return 0;
}

double calcBillingAmount(double hourlyRate, int totalConsultingTime, double income) {
  if (income <= 25000) {
    if (totalConsultingTime <= FREE_CONSULTING_TIME_FOR_LOW_INCOME)
      return 0;
    else
      return hourlyRate * SERVICE_CHARGE_RATE_FOR_LOW_INCOME * (totalConsultingTime - FREE_CONSULTING_TIME_FOR_LOW_INCOME) / MINUTES_PER_HOUR;
  } else {
    if (totalConsultingTime <= FREE_CONSULTING_TIME_FOR_OTHERS)
      return 0;
    else
      return hourlyRate * SERVICE_CHARGE_RATE_FOR_OTHERS * (totalConsultingTime - FREE_CONSULTING_TIME_FOR_OTHERS) / MINUTES_PER_HOUR;
  }
}