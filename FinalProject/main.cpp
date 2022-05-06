#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>

#include "AirQuality.cpp"

using namespace std;

vector<AirQuality> readCSV(string filename);

double averageT(vector<AirQuality> airLog, int year, int month);

double averageRH(vector<AirQuality> airLog, int year, int month);

double averageAH(vector<AirQuality> airLog, int year, int month);

void displayTandRH(vector<AirQuality> airLog, Date date, Time time);

double highestT(vector<AirQuality> airLog, int year, int month);

double highestRH(vector<AirQuality> airLog, int year, int month);

double highestAH(vector<AirQuality> airLog, int year, int month);

void higherThanAverageT(vector<AirQuality> airLog, int year, int month);

void higherThanAverageRH(vector<AirQuality> airLog, int year, int month);

void higherThanAverageAH(vector<AirQuality> airLog, int year, int month);

int main() {
  vector<AirQuality> airLog = readCSV("AirQualityUCI.csv");

  char choice;
  while (true) {
    cout << "######################################## MENU "
            "########################################"
         << endl;
    cout << "0. Enter a month for its average temperature" << endl;
    cout << "1. Enter a month for its average relative humidity" << endl;
    cout << "2. Enter a month for its average absolute humidity" << endl;
    cout << "3. Enter a valid date and time for its temperature and relative "
            "humidity"
         << endl;
    cout << "4. Enter a month for its highest temperature" << endl;
    cout << "5. Enter a month for its highest relative humidity" << endl;
    cout << "6. Enter a month for its highest absolute humidity" << endl;
    cout << "7. Enter a month and the program will display the dates and times "
            "for the month when the temperature is higher than the average"
         << endl;
    cout
        << "8. Enter a month and the program will display the dates and times "
           "for the month when the relative humidity is higher than the average"
        << endl;
    cout
        << "9. Enter a month and the program will display the dates and times "
           "for the month when the absolute humidity is higher than the average"
        << endl;
    cout << "##################################################################"
            "####################"
         << endl;
    cout << "Enter 0 to 9 to execute operations, enter any other key to exit: ";
    cin >> choice;
    if (choice != '0' && choice != '1' && choice != '2' && choice != '3' &&
        choice != '4' && choice != '5' && choice != '6' && choice != '7' &&
        choice != '8' && choice != '9') {
      break;
    }
    switch (choice) {
      case '0': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The average temperature for that month is "
             << averageT(airLog, year, month) << endl;
        break;
      }
      case '1': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The average relative humidity for that month is "
             << averageRH(airLog, year, month) << endl;
        break;
      }
      case '2': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The average absolute humidity for that month is "
             << averageAH(airLog, year, month) << endl;
        break;
      }
      case '3': {
        Date date;
        cout << "Enter date: ";
        cin >> date;
        Time time;
        cout << "Enter time: ";
        cin >> time;
        displayTandRH(airLog, date, time);
        break;
      }
      case '4': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The highest temperature for that month is "
             << highestT(airLog, year, month) << endl;
        break;
      }
      case '5': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The highest relative humidity for that month is "
             << highestRH(airLog, year, month) << endl;
        break;
      }
      case '6': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        cout << "The highest absolute humidity for that month is "
             << highestAH(airLog, year, month) << endl;
        break;
      }
      case '7': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        higherThanAverageT(airLog, year, month);
        break;
      }
      case '8': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        higherThanAverageRH(airLog, year, month);
        break;
      }
      case '9': {
        int year;
        cout << "Enter year: ";
        cin >> year;
        int month;
        cout << "Enter month: ";
        cin >> month;
        higherThanAverageAH(airLog, year, month);
        break;
      }
    }
  }
}

vector<AirQuality> readCSV(string filename) {
  vector<AirQuality> airLog;
  ifstream input;
  input.open(filename);
  string header;
  getline(input, header);

  vector<string> headerList;
  stringstream ss(header);
  string attribute;
  while (getline(ss, attribute, ',')) {
    attribute.erase(remove(attribute.begin(), attribute.end(), '\"'),
                    attribute.end());
    headerList.push_back(attribute);
  }

  string line;
  while (getline(input, line)) {
    AirQuality airQuality;
    stringstream ss(line);
    string value;
    int i = 0;
    while (getline(ss, value, ',')) {
      value.erase(remove(value.begin(), value.end(), '\"'), value.end());
      if (headerList[i] == "Date") {
        Date date;
        stringstream ss(value);
        ss >> date;
        airQuality.SetDate(date);
      } else if (headerList[i] == "Time") {
        Time time;
        stringstream ss(value);
        ss >> time;
        airQuality.SetTime(time);
      } else if (headerList[i] == "T") {
        airQuality.SetTemperature(stod(value));
      } else if (headerList[i] == "RH") {
        airQuality.SetRelativeHumidity(stod(value));
      } else if (headerList[i] == "AH") {
        airQuality.SetAbsoluteHumidity(stod(value));
      }
      i++;
    }
    airLog.push_back(airQuality);
  }
  return airLog;
}

double averageT(vector<AirQuality> airLog, int year, int month) {
  double sum = 0;
  int n = 0;
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      sum += airLog[i].GetTemperature();
      n++;
    }
  }
  return sum / n;
}

double averageRH(vector<AirQuality> airLog, int year, int month) {
  double sum = 0;
  int n = 0;
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      sum += airLog[i].GetRelativeHumidity();
      n++;
    }
  }
  return sum / n;
}

double averageAH(vector<AirQuality> airLog, int year, int month) {
  double sum = 0;
  int n = 0;
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      sum += airLog[i].GetAbsoluteHumidity();
      n++;
    }
  }
  return sum / n;
}

void displayTandRH(vector<AirQuality> airLog, Date date, Time time) {
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate() == date && airLog[i].GetTime() == time) {
      cout << "The temperature is " << airLog[i].GetTemperature()
           << ", the relative humidity is " << airLog[i].GetRelativeHumidity()
           << endl;
      break;
    }
  }
}

double highestT(vector<AirQuality> airLog, int year, int month) {
  double maxVal = -numeric_limits<double>::infinity();
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      maxVal = max(maxVal, airLog[i].GetTemperature());
    }
  }
  return maxVal;
}

double highestRH(vector<AirQuality> airLog, int year, int month) {
  double maxVal = -numeric_limits<double>::infinity();
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      maxVal = max(maxVal, airLog[i].GetRelativeHumidity());
    }
  }
  return maxVal;
}

double highestAH(vector<AirQuality> airLog, int year, int month) {
  double maxVal = -numeric_limits<double>::infinity();
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month) {
      maxVal = max(maxVal, airLog[i].GetAbsoluteHumidity());
    }
  }
  return maxVal;
}

void higherThanAverageT(vector<AirQuality> airLog, int year, int month) {
  double avgT = averageT(airLog, year, month);
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month &&
        airLog[i].GetTemperature() > avgT) {
      cout << airLog[i].GetDate() << setw(10) << airLog[i].GetTime() << setw(10)
           << airLog[i].GetTemperature() << endl;
    }
  }
}

void higherThanAverageRH(vector<AirQuality> airLog, int year, int month) {
  double avgRH = averageRH(airLog, year, month);
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month &&
        airLog[i].GetRelativeHumidity() > avgRH) {
      cout << airLog[i].GetDate() << setw(10) << airLog[i].GetTime() << setw(10)
           << airLog[i].GetRelativeHumidity() << endl;
    }
  }
}

void higherThanAverageAH(vector<AirQuality> airLog, int year, int month) {
  double avgAH = averageAH(airLog, year, month);
  for (int i = 0; i < airLog.size(); i++) {
    if (airLog[i].GetDate().GetYear() == year &&
        airLog[i].GetDate().GetMonth() == month &&
        airLog[i].GetAbsoluteHumidity() > avgAH) {
      cout << airLog[i].GetDate() << setw(10) << airLog[i].GetTime() << setw(10)
           << airLog[i].GetAbsoluteHumidity() << endl;
    }
  }
}