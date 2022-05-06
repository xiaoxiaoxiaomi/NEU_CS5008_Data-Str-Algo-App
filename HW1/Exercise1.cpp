#include<iostream>
#include <math.h>

using namespace std;

int main() {
  double radius;
  double height;
  double volume;
  double side;

  cout << "Enter the radius of the base: ";
  cin >> radius;

  cout << "Enter the height of the cylindrical container: ";
  cin >> height;

  volume = M_PI * pow(radius, 2) * height;
  side = pow(volume, 1.0 / 3);

  cout << "The side of the cube with the same volume as the cylindrical container: " << side << endl;
}