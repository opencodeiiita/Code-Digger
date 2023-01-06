#include <iostream>
#include <cstdio>

using namespace std;

int t, n;

int main() {
  cin >> t;
  while (t--) {
    cin >> n;
    int a = 0, b = 1, c;
    if (n == 0) {
      cout << a << endl;
    } else if (n == 1) {
      cout << b << endl;
    } else {
      for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
      }
      cout << c << endl;
    }
  }
  return 0;
}
