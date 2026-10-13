#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    int start;
    if (i % 2 == 0) {
      start = i * m + 1;
      for (int j = start; j < start + m; ++j)
        cout << j << ' ';
      cout << endl;
    } else {
      start = i * m + 1 + (m - 1);
      for (int j = start; j > start - m; --j)
        cout << j << ' ';
      cout << endl;
    }
  }
}
