#include<iostream>

using namespace std;

const double FINAL_MANUSCRIPT_ROYALTIES = 5000;
const double ROYALTIES_WHEN_PUBLISHED = 20000;
const double SECOND_OPTION_RATE = 0.125;
const double THIRD_OPTION_RATE_UNDER_4000 = 0.1;
const double THIRD_OPTION_RATE_OVER_4000 = 0.14;

int main() {
  double firstOptionRoyalties, secondOptionRoyalties, thirdOptionRoyalties;
  double netPricePerCopy;
  int estimatedSoldNumber;

  cout << "Enter the net price of each copy of the novel: ";
  cin >> netPricePerCopy;

  cout << "Enter the estimated number of copies that will be sold: ";
  cin >> estimatedSoldNumber;

  firstOptionRoyalties = FINAL_MANUSCRIPT_ROYALTIES + ROYALTIES_WHEN_PUBLISHED;
  secondOptionRoyalties = SECOND_OPTION_RATE * netPricePerCopy * estimatedSoldNumber;
  if (estimatedSoldNumber <= 4000) {
    thirdOptionRoyalties = THIRD_OPTION_RATE_UNDER_4000 * netPricePerCopy * estimatedSoldNumber;
  } else {
    thirdOptionRoyalties = THIRD_OPTION_RATE_UNDER_4000 * netPricePerCopy * 4000 + THIRD_OPTION_RATE_OVER_4000 * netPricePerCopy * (estimatedSoldNumber - 4000);
  }

  cout << "Royalties under first option: " << firstOptionRoyalties << endl;
  cout << "Royalties under second option: " << secondOptionRoyalties << endl;
  cout << "Royalties under third option: " << thirdOptionRoyalties << endl;

  if (firstOptionRoyalties > secondOptionRoyalties && firstOptionRoyalties > thirdOptionRoyalties) {
    cout << "The best option is the first one" << endl;
  } else if (secondOptionRoyalties > thirdOptionRoyalties) {
    cout << "The best option is the second one" << endl;
  } else {
    cout << "The best option is the third one" << endl;
  }
}