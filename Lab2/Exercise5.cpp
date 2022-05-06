#include<iostream>

using namespace std;

const int NUMBER_OF_STUDENT = 20;

struct studentType {
  string studentFName;
  string studentLName;
  int testScore;
  char grade;
};

void readStudentData(studentType arr[], int& size, studentType stu);

char scoreToGrade(int score);

void assignGrade(studentType arr[], int size);

int findHighestScore(studentType arr[], int size);

void printStudentsHavingHighestScore(studentType arr[], int size, int highestScore);

int main() {
  studentType arr[NUMBER_OF_STUDENT];
  int size = 0;
  char letter;

  cout << "Enter 20 students' information" << endl;

  for (int i = 0; i < NUMBER_OF_STUDENT; i++) {
    studentType stu;
    cout << "Enter a student's first name, last name and test score: " << endl;
    cin >> stu.studentFName >> stu.studentLName >> stu.testScore;
    readStudentData(arr, size, stu);
  }

  assignGrade(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i].studentFName << " " << arr[i].studentLName << "\'s grade: " << arr[i].grade << endl;
  }

  int highestScore = findHighestScore(arr, size);
  cout << "The highest score: " << highestScore << endl;

  cout << "The names of the students having the highest test score: " << endl;
  printStudentsHavingHighestScore(arr, size, highestScore);
}

void readStudentData(studentType arr[], int& size, studentType stu) {
  arr[size++] = stu;
}

char scoreToGrade(int score) {
  if (score >= 90)
    return 'A';
  else if (score >= 80)
    return 'B';
  else if (score >= 70)
    return 'C';
  else if (score >= 60)
    return 'D';
  else
    return 'F';
}

void assignGrade(studentType arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i].grade = scoreToGrade(arr[i].testScore);
  }
}

int findHighestScore(studentType arr[], int size) {
  int highestScore = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i].testScore > highestScore)
      highestScore = arr[i].testScore;
  }
  return highestScore;
}

void printStudentsHavingHighestScore(studentType arr[], int size, int highestScore) {
  for (int i = 0; i < size; i++) {
    if (arr[i].testScore == highestScore)
      cout << arr[i].studentFName << ", " << arr[i].studentLName << endl;
  }
}