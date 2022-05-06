#include <iostream>
#include <map>

using namespace std;

int main() {
  multimap<string, double> scoresList;
  scoresList.insert(make_pair("Judy Smith", 91.0));
  scoresList.insert(make_pair("Charlie Hughes", 92.0));
  scoresList.insert(make_pair("Sierra Foland", 93.0));
  scoresList.insert(make_pair("Steven Moore", 94.0));
  scoresList.insert(make_pair("Judy Smith", 95.5));

  multimap<string, double>::iterator iter;
  for (iter = scoresList.begin(); iter != scoresList.end(); iter++) { 
    cout << iter->first<< ' ' << iter->second << '\n'; 
  }

  cout << scoresList.find("Judy Smith")->second << endl; // find the first one

  return 0;
}
