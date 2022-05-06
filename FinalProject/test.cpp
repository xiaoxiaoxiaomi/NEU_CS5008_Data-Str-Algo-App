#include "AirQuality.cpp"

int main() {
  Time T1;
  cout << T1 << endl;
  Time T2(12, 34, 56);
  cout << T2 << endl;
  cout << T2.GetHour() << endl;
  cout << T2.GetMin() << endl;
  cout << T2.GetSec() << endl;
  T2.SetHour(23);
  cout << T2.GetHour() << endl;
  T2.SetMin(59);
  cout << T2.GetMin() << endl;
  T2.SetSec(0);
  cout << T2.GetSec() << endl;
  T1.SetTime(9, 30, 59);
  cout << T1.GetHour() << endl;
  cout << T1.GetMin() << endl;
  cout << T1.GetSec() << endl;
  T1.printTime();
  Time T3(9, 30, 59);
  cout << (T1 == T3) << endl;
  T3.SetTime(10, 30, 59);
  cout << (T1 == T3) << endl;
  cout << T3 << endl;
  Time T4;
  cin >> T4;  // 15:27:48
  cout << T4 << endl;

  Date D1;
  cout << D1 << endl;
  Date D2(4, 25, 2022);
  cout << D2 << endl;
  cout << D2.GetMonth() << endl;
  cout << D2.GetDay() << endl;
  cout << D2.GetYear() << endl;
  D2.SetMonth(12);
  cout << D2.GetMonth() << endl;
  D2.SetDay(1);
  cout << D2.GetDay() << endl;
  D2.SetYear(2021);
  cout << D2.GetYear() << endl;
  D1.SetDate(8, 10, 2024);
  cout << D1.GetMonth() << endl;
  cout << D1.GetDay() << endl;
  cout << D1.GetYear() << endl;
  D1.printDate();
  Date D3(8, 10, 2024);
  cout << (D1 == D3) << endl;
  D3.SetDate(8, 10, 2023);
  cout << (D1 == D3) << endl;
  cout << D3 << endl;
  Date D4;
  cin >> D4;  // 9/11/1999
  cout << D4 << endl;

  AirQuality airQuality1;
  cout << airQuality1.GetDate() << endl;
  cout << airQuality1.GetTime() << endl;
  cout << airQuality1.GetTemperature() << endl;
  cout << airQuality1.GetRelativeHumidity() << endl;
  cout << airQuality1.GetAbsoluteHumidity() << endl;
  Date D(3, 10, 2004);
  Time T(18, 00, 00);
  AirQuality airQuality2(D, T, 13.6, 48.9, 0.7578);
  cout << airQuality2.GetDate() << endl;
  cout << airQuality2.GetTime() << endl;
  cout << airQuality2.GetTemperature() << endl;
  cout << airQuality2.GetRelativeHumidity() << endl;
  cout << airQuality2.GetAbsoluteHumidity() << endl;
  airQuality1.SetDate(Date(4, 4, 2005));
  cout << airQuality1.GetDate() << endl;
  airQuality1.SetTime(Time(14, 0, 0));
  cout << airQuality1.GetTime() << endl;
  airQuality1.SetTemperature(28.5);
  cout << airQuality1.GetTemperature() << endl;
  airQuality1.SetRelativeHumidity(13.1);
  cout << airQuality1.GetRelativeHumidity() << endl;
  airQuality1.SetAbsoluteHumidity(0.5028);
  cout << airQuality1.GetAbsoluteHumidity() << endl;
}