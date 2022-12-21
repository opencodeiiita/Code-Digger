#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Read in the number of rounds and the number of times Addy and Om show each card
  int n;
  cin >> n;

  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;

  // Calculate the minimum and maximum number of rounds that Addy can win
  int min_wins = max(0, b2 - a3);
  int max_wins = min(a1, b1) + min(a2, b3) + min(a3, b2);

  // Print the results
  cout << min_wins << " " << max_wins << endl;

  return 0;
}
