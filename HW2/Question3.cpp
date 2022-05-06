#include<iostream>

using namespace std;

const int DEFAULT_ARRAY_LENGTH = 100;

int main() {
  char* str = new char[DEFAULT_ARRAY_LENGTH];

  cout << "Enter a string: ";
  cin.get(str, DEFAULT_ARRAY_LENGTH);

  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = toupper(str[i]);
  }

  cout << "The string in uppercase letters: " << str << endl;

  return 0;
}