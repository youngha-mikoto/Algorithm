#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  while (cin >> a >> b) {
    if ((2 <= a && a <= 9) && (2 <= b && b <= 9)) {
      if (a <= b) {
        for (int i = a; i <= b; ++i) {
          for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << endl;
          }
          cout << endl;
        }
      } else {
        for (int i = a; i >= b; --i) {
          for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << endl;
          }
          cout << endl;
        }
      }
    } else {
      cout << "INPUT ERROR!" << endl;
      continue;
    }
  }
}
