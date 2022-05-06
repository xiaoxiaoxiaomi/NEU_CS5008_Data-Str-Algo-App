#include<iostream>
#include<math.h>

using namespace std;

const double CARTON_CAPACITY = 3.78;
const double COST_OF_ONE_LITER = 0.38;
const double PROFIT_ON_A_CARTON = 0.27;

int main() {
  double amount;
  cout << "Enter the total amount of milk: " << endl;
  cin >> amount;

  int cartons;
  cartons = ceil(amount / CARTON_CAPACITY);
  //cartons = static_cast<int> (amount / CARTON_CAPACITY + 0.5);
  cout << "The number of milk cartons needed: " << cartons << endl;

  double cost;
  cost = COST_OF_ONE_LITER * amount;
  cout << "The cost of producing milk: " << cost << endl;

  double profit;
  profit = PROFIT_ON_A_CARTON * cartons;
  cout << "The profit for producing milk: " << profit << endl;

  return 0;
}