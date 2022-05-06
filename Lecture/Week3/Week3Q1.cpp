#include<iostream>
#include<string>

using namespace std;

struct studentType {
  string firstName;
  string lastName;
  char courseGrade;
  int testScore;
  int programmingScore;
  double GPA;
};

studentType readRecords(studentType s1);

int main() {
  studentType s1, s2;
  s1.lastName = "Smith";
  s1.firstName = "John";
  cout << s1.lastName << endl;
  studentType s2 = readRecords(s1);
}

studentType readRecords(studentType s1) {
  studentType s2 = s1;
  return s2;
}