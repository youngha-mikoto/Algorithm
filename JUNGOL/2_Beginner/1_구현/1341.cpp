#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int s, e;
  cin >> s >> e;

  if (s <= e) {
    for (int i = s; i <= e; ++i) {
      for (int j = 1; j <= 9; ++j) {
        printf("%d * %d = %2d   ", i, j, i * j);
        if (j % 3 == 0)
          printf("\n");
      }
      printf("\n");
    }
  } else {
    for (int i = s; i >= e; --i) {
      for (int j = 1; j <= 9; ++j) {
        printf("%d * %d = %2d   ", i, j, i * j);
        if (j % 3 == 0)
          printf("\n");
      }
      printf("\n");
    }
  }
}
