#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<char>> arr(n, vector<char>(n));

  char c = 'A';
  for (int j = 0; j < n; ++j) {
    int i;
    if (j % 2 == 0) {
      i = 0;
      while (i < n) {
        arr[i][j] = c;
        i++;
        if (c == 'Z') {
          c = 'A';
        } else {
          c++;
        }
      }
    } else {
      i = n - 1;
      while (i >= 0) {
        arr[i][j] = c;
        i--;
        if (c == 'Z') {
          c = 'A';
        } else {
          c++;
        }
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
