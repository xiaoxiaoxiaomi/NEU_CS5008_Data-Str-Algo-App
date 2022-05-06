#include<iostream>

using namespace std;

bool isVowel(char ch);

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  
  if (isVowel(ch))
    cout << "The character is a vowel" << endl;
  else
    cout << "The character is not a vowel" << endl;

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