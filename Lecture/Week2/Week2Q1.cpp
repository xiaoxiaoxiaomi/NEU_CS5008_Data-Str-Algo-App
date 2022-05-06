// Below example is a value-returning function
#include <iostream>

using namespace std;

int larger(int x, int y);

int main() {
  int a, b, ans;
  cout << "Enter a: " << endl;
  cin >> a;
  cout << "Enter b: " << endl;
  cin >> b;
  ans = larger(a,b);
  cout << "The larger value is: " << ans << endl;
  return 0;
}

int larger(int x, int y)
{
  int max;
  if (x > y)
    max = x;
  else
    max = y;
  return max;
}
// Below example is a void function
#include <iostream>

using namespace std;

void larger(int x, int y);

int main()
{
  int a, b, ans;
  cout << "Enter a: " << endl;
  cin >> a;
  cout << "Enter b: " << endl;
  cin >> b;
  larger(a,b);
  return 0;
}

void larger(int x, int y)
{
  int max;
  if (x > y)
    max = x;
  else
    max = y;
  cout << "The larger value is: " << max << endl;
}