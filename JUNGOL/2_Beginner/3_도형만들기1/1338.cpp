#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<vector<char>> arr(n, vector<char>(n, ' '));

  char c = 'A';
  int k = n;
  for (int sum = n - 1; sum <= 2 * (n - 1); ++sum) {
    int j = n - 1;
    for (int rep = 0; rep < k; ++rep) {
      int i = sum - j;
      arr[i][j--] = c;
      if (c == 'Z') {
        c = 'A';
      } else {
        c++;
      }
    }
    k--;
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
