#include<iostream>
#include<fstream>
#include<stdexcept>
#include<iomanip>
#include<string>

using namespace std;

const int MENU_SIZE = 8;
const double TAX_RATE = 0.05;

struct menuItemType {
  string menuItem;
  double menuPrice;
};

void getData(ifstream & inFile, menuItemType mList[], int size);

void showMenu(menuItemType mList[], int size);

void selectOneItemPerType(menuItemType mList[], int size, int itemQuantityList[]);

void printCheck(menuItemType mList[], int size, int itemQuantityList[]);

int main() {
  menuItemType menuList[MENU_SIZE];
  ifstream inFile;
  cout << fixed << showpoint << setprecision(2);

  inFile.open("menu.txt");
  if (inFile.fail()) {
    throw runtime_error("Fail to open file!");
  }
  getData(inFile, menuList, MENU_SIZE);
  showMenu(menuList, MENU_SIZE);
  
  int itemQuantityList[MENU_SIZE];
  for (int i=0; i < MENU_SIZE; i++) itemQuantityList[i] = 0;
  selectOneItemPerType(menuList, MENU_SIZE, itemQuantityList);
  printCheck(menuList, MENU_SIZE, itemQuantityList);
};

void getData(ifstream & inFile, menuItemType mList[], int size) {
  for (int i=0; i < size; i++) {
    getline(inFile, mList[i].menuItem, '$');
    mList[i].menuItem.erase(0, mList[i].menuItem.find_first_not_of('\n')); 
    mList[i].menuItem.erase(mList[i].menuItem.find_last_not_of(" ") + 1); 
    inFile >> mList[i].menuPrice;
  }
}

void showMenu(menuItemType mList[], int size) {
  cout << "Welcome to Johnny's Restaurant" << endl;
  for (int i=0; i < size; i++) {
    cout << left << setw(20) << mList[i].menuItem << '$' << mList[i].menuPrice << endl;
  }
}

void selectOneItemPerType(menuItemType mList[], int size, int itemQuantityList[]) {
  cout << "Select only one item of a particular type." << endl;
  while (true) {
    char ifContinue;
    cout << "Enter Y if you want to choose an item, otherwise, enter any other key to exit: ";
    cin >> ifContinue;
    if (ifContinue != 'Y')
      break;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string item;
    cout << "Enter an item's name: ";
    getline(cin, item);
    for (int j=0; j < MENU_SIZE; j++) {
      if (mList[j].menuItem == item) {
        itemQuantityList[j] = 1;
        break;
      }
    }
  }
}

void printCheck(menuItemType mList[], int size, int itemQuantityList[]) {
  cout << "Welcome to Johnny's Restaurant" << endl;

  double amount = 0;
  for (int i=0; i < MENU_SIZE; i++) {
    if (itemQuantityList[i] > 0) {
      cout << std::left << setw(20) << mList[i].menuItem 
      << "$" << itemQuantityList[i] * mList[i].menuPrice << endl;
      amount += itemQuantityList[i] * mList[i].menuPrice;
    }
  }

  double tax = TAX_RATE * amount;
  cout << setw(20) << "Tax" 
  << "$"  << tax << endl;

  cout << setw(20) << "Amount Due" 
  << "$" << amount + tax << endl;
}
