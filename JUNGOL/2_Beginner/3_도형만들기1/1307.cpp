#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<char>> arr(n, vector<char>(n));

  char c = 'A';
  for (int j = n - 1; j >= 0; --j) {
    for (int i = n - 1; i >= 0; --i) {
      arr[i][j] = c;
      if (c == 'Z') {
        c = 'A';
      } else {
        c++;
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
