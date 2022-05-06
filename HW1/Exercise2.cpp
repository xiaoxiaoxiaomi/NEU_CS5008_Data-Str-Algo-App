#include<iostream>
#include <math.h>

using namespace std;

int main() {
  double lengthOfYard;
  double radiusOfTree;
  double spaceBetweenTrees;
  int numberOfTrees;
  double totalSpace;

  cout << "Enter the length of the yard: ";
  cin >> lengthOfYard;

  cout << "Enter the radius of a fully grown tree: ";
  cin >> radiusOfTree;

  cout << "Enter the required space between fully grown trees: ";
  cin >> spaceBetweenTrees;

  numberOfTrees = floor(lengthOfYard / (radiusOfTree * 2 + spaceBetweenTrees));
  if (numberOfTrees * (radiusOfTree * 2 + spaceBetweenTrees) + radiusOfTree * 2 <= lengthOfYard)
    numberOfTrees += 1;
  cout << "The number of trees that can be planted in the yard: " << numberOfTrees << endl;
  
  totalSpace = numberOfTrees * M_PI * pow(radiusOfTree, 2);
  cout << "The total space that will be occupied by the fully grown trees: " << totalSpace << endl;
}