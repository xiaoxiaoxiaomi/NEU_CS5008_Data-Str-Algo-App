#include<iostream>
#include<math.h>  

using namespace std;

struct Params {
  double windSpeed;
  double temperature;
};

struct Params getUserInput();

double calcWindchillFactor(double windSpeed, double temperature);

int main() {
  struct Params params = getUserInput();

  cout << "The windchill factor: " << calcWindchillFactor(params.windSpeed, params.temperature) << endl;

  return 0;
}

struct Params getUserInput() {
  struct Params params;

  cout << "Enter wind speed in miles per hour: ";
  cin >> params.windSpeed;
  cout << "Enter temperature in degrees Fahrenheit: ";
  cin >> params.temperature;

  return params;
}

double calcWindchillFactor(double windSpeed, double temperature) {
  return 35.74 + 0.6215 * temperature - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temperature * pow(windSpeed, 0.16);
}