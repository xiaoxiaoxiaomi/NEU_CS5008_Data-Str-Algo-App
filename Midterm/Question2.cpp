#include <iostream>
#include <iomanip>

using namespace std;

const int MENU_SIZE = 3;
const double SMALL_COST = 1.75;
const double MEDIUM_COST = 1.90;
const double LARGE_COST = 2.00;

struct coffeeType {
  string coffeeSize;
  double coffeePrice;
};

void orderCoffee(coffeeType mList[], int size, int oList[], int tList[]);

void computeCost(coffeeType mList[], int size, int oList[]);

void showTotalMoney(coffeeType mList[], int size, int tList[]);

int main() {
  coffeeType menuList[MENU_SIZE];
  menuList[0].coffeeSize  = "Small";
  menuList[0].coffeePrice = SMALL_COST;
  menuList[1].coffeeSize = "Medium";
  menuList[1].coffeePrice = MEDIUM_COST;
  menuList[2].coffeeSize = "Large";
  menuList[2].coffeePrice = LARGE_COST;

  int totalOrderList[MENU_SIZE];
  for (int i = 0; i < MENU_SIZE; i++) {
    totalOrderList[i] = 0;
  }

  int orderList[MENU_SIZE];
  orderCoffee(menuList, MENU_SIZE, orderList, totalOrderList);
  computeCost(menuList, MENU_SIZE, orderList);

  orderCoffee(menuList, MENU_SIZE, orderList, totalOrderList);
  computeCost(menuList, MENU_SIZE, orderList);

  showTotalMoney(menuList, MENU_SIZE, totalOrderList);
}

void orderCoffee(coffeeType mList[], int size, int oList[], int tList[]) {
  cout << "Welcome to Jason's coffee shop, here's the menu: " << endl;
  cout << left << setw(20) << "Small(9oz)" << "$" << SMALL_COST << endl;
  cout << left << setw(20) << "Medium(12oz)" << "$" << MEDIUM_COST << endl;
  cout << left << setw(20) << "Large(15oz)" << "$" << LARGE_COST << endl;
  cout << "You can buy coffee in any size and in any number of cups." << endl;
  while (true) {
    char ifContinue;
    cout << "Enter Y if you want to order coffee, otherwise, enter any other key to exit: ";
    cin >> ifContinue;
    if (ifContinue != 'Y')
      break;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string coffeeSize;
    cout << "Enter the size of coffee you want(Small, Medium or Large): ";
    cin >> coffeeSize;
    int quantity;
    cout << "Enter the quantity you want: ";
    cin >> quantity;
    for (int i=0; i < size; i++) {
      if (mList[i].coffeeSize == coffeeSize) {
        oList[i] = quantity;
        tList[i] += quantity;
        break;
      }
    }
  }
}

void computeCost(coffeeType mList[], int size, int oList[]) {
  cout << "Your total cost of the total coffee bought" << endl;
  double amount = 0;
  for (int i=0; i < size; i++) {
    if (oList[i] > 0) {
      cout << std::left << setw(5) << oList[i] 
      << setw(20) << mList[i].coffeeSize
      << "$" << oList[i] * mList[i].coffeePrice << endl;
      amount += oList[i] * mList[i].coffeePrice;
    }
  }
  cout << std::left << setw(5) << " " 
  << setw(20) << "Amount: " 
  << "$" << amount << endl;
}

void showTotalMoney(coffeeType mList[], int size, int tList[]) {
  cout << "The total money made by the shop owner for all the coffee sold" << endl;
  double amount = 0;
  for (int i=0; i < size; i++) {
    if (tList[i] > 0) {
      cout << std::left << setw(5) << tList[i] 
      << setw(20) << mList[i].coffeeSize
      << "$" << tList[i] * mList[i].coffeePrice << endl;
      amount += tList[i] * mList[i].coffeePrice;
    }
  }
  cout << std::left << setw(5) << " " 
  << setw(20) << "Amount: " 
  << "$" << amount << endl;
}