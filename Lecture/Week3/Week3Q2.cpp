#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main() {
  double saleAmount = 0;
  int totalTicketsSold = 0;
  double ticketPrice;
  int ticketsSold;

  ifstream inFile;
  ofstream outFile;

  inFile.open("input.txt");
  outFile.open("output.txt");

  outFile << fixed << showpoint << setprecision(2);

  cout << "Processing Data" << endl;

  inFile >> ticketPrice >> ticketsSold;
  while (inFile) {
    saleAmount += ticketPrice * ticketsSold;
    totalTicketsSold += ticketsSold;
    inFile >> ticketPrice >> ticketsSold;
  }

  outFile << "Number of tickects sold: " << totalTicketsSold << endl;
  outFile << "Sale amount = $" << saleAmount << endl;

  inFile.close();
  outFile.close();

  return 0;
}