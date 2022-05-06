#include<iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string removeAllVowels(string str);

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str);

  cout << "The output string after removing all the vowels: " << removeAllVowels(str) << endl;

  return 0;
}

bool isVowel(char ch) {
  char vowelArr[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
  int arrLen = sizeof(vowelArr) / sizeof(vowelArr[0]);
  for (int i = 0; i < arrLen; i++) {
    if (ch == vowelArr[i]) {
      return true;
    }
  }
  return false;
}

string removeAllVowels(string str) {
  int strLen = str.size();
  for (int i = strLen-1; i >=0; i--) {
    if (isVowel(str[i])) {
      str = str.substr(0, i) + str.substr(i+1);
    }
  }
  return str;
}