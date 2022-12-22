#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Read in the array
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int a[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Sort the array
  sort(a, a + n);

  // Read in the element to search for
  int x;
  cout << "Enter the element to search for: ";
  cin >> x;

  // Perform binary search
  int left = 0;
  int right = n - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (a[mid] == x) {
      cout << "YES" << endl;
      return 0;
    }
    else if (a[mid] < x) {
      left = mid + 1;
    }
    else {
      right = mid - 1;
    }
  }

  cout << "NO" << endl;
  return 0;
}
