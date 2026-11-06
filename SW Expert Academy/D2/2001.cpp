#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(n, 0));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> arr[i][j];
    }
  }

  int max_sum = 0;
  for (int si = 0; si + m <= n; ++si) {
    for (int sj = 0; sj + m <= n; ++sj) {
      int sum = 0;
      for (int i = si; i < si + m; ++i) {
        for (int j = sj; j < sj + m; ++j) {
          sum += arr[i][j];
        }
      }
      max_sum = max(max_sum, sum);
    }
  }

  cout << max_sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    cout << '#' << t << ' ';
    solve();
  }
}
