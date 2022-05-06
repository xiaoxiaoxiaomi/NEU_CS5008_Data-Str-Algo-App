#include<iostream>
#include<iomanip>

using namespace std;

const int NUMBER_OF_CANDIDATE = 5;

struct candidateType {
  string candidateLName;
  int numberOfVotes;
  double percentageOfVotes;
};

int main() {
  candidateType arr[NUMBER_OF_CANDIDATE];
  int size = 0;
  int totalVotes = 0;
  int winnerIndex = 0;
  int maxVotes = 0;

  for (int i = 0; i < NUMBER_OF_CANDIDATE; i++) {
    candidateType candidate;
    cout << "Enter a candidate's last name and number of votes: " << endl;
    cin >> candidate.candidateLName >> candidate.numberOfVotes;
    totalVotes += candidate.numberOfVotes;
    if (candidate.numberOfVotes > maxVotes) {
      winnerIndex = i;
      maxVotes = candidate.numberOfVotes;
    }
    arr[size++] = candidate;
  }

  for (int i = 0; i < size; i++) {
    arr[i].percentageOfVotes = (double)arr[i].numberOfVotes / totalVotes * 100;
  }

  cout <<  setw(20) << "Candidate" << setw(20) << "Votes Received" << setw(20) << "\% of Total Votes" << endl;
  for (int i = 0; i < size; i++) {
    cout << setw(20) << arr[i].candidateLName << setw(20) << arr[i].numberOfVotes << setw(20) << fixed << showpoint << setprecision(2) << arr[i].percentageOfVotes << endl;
  }
  cout << setw(20) << "Total" << setw(20) << totalVotes << endl;
  cout << "The Winner of the Election is " << arr[winnerIndex].candidateLName << endl;

  return 0;
}