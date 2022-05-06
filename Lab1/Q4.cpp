#include<iostream>

using namespace std;

int main()
{
  int accountNumber;
  char accountType;
  double minimumBalance;
  double currentBalance;

  cout << "Enter account number, account type, minimum balance and current balance: " << endl;
  cin >> accountNumber >> accountType >> minimumBalance >> currentBalance;

  if (currentBalance < minimumBalance) {
    if (accountType == 'S' || accountType == 's') {
      currentBalance -= 10;
      cout << accountNumber << "\t" << accountType << "\t" << currentBalance << "\t" << "There is a service charge of $10 for savings accounts." << endl;
    } else {
      currentBalance -= 25;
      cout << accountNumber << "\t" << accountType << "\t" << currentBalance << "\t" << "There is a service charge of $25 for checking accounts." << endl;
    }
  } else {
    if (accountType == 'S' || accountType == 's') {
      currentBalance *= (1 + 0.04);
      cout << accountNumber << "\t" << accountType << "\t" << currentBalance << "\t" << "Saving accounts receive 4\% interest." << endl;
    } else {
      if (currentBalance <= minimumBalance + 5000) {
        currentBalance *= (1 + 0.03);
        cout << accountNumber << "\t" << accountType << "\t" << currentBalance << "\t" << "The interest is 3\%." << endl;
      } else {
        currentBalance *= (1 + 0.05);
        cout << accountNumber << "\t" << accountType << "\t" << currentBalance << "\t" << "The interest is 5\%." << endl;
      }
    }
  }
}