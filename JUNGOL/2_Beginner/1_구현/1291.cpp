#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    int a, b;
    cin >> a >> b;

    if ((2 <= a && a <= 9) && (2 <= b && b <= 9)) {
      if (a <= b) {
        for (int j = 1; j <= 9; ++j) {
          for (int i = a; i <= b; ++i) {
            printf("%d * %d = %2d   ", i, j, i * j);
          }
          printf("\n");
        }
      } else {
        for (int j = 1; j <= 9; ++j) {
          for (int i = a; i >= b; --i) {
            printf("%d * %d = %2d   ", i, j, i * j);
          }
          printf("\n");
        }
      }
      break;
    } else {
      cout << "INPUT ERROR!" << endl;
      continue;
    }
  }
}
