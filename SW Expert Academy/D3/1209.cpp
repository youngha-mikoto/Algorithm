#include <bits/stdc++.h>
using namespace std;

void solve() {
  int arr[100][100];
  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 100; ++j) {
      cin >> arr[i][j];
    }
  }

  int sum = -1;

  // 각 행의 합
  for (int i = 0; i < 100; ++i) {
    int row_sum = 0;
    for (int j = 0; j < 100; ++j) {
      row_sum += arr[i][j];
    }
    sum = max(sum, row_sum);
  }

  // 각 열의 합
  for (int j = 0; j < 100; ++j) {
    int col_sum = 0;
    for (int i = 0; i < 100; ++i) {
      col_sum += arr[i][j];
    }
    sum = max(sum, col_sum);
  }

  // 각 대각선의 합
  int dsum1 = 0;
  for (int i = 0; i < 100; ++i) {
    dsum1 += arr[i][i];
  }
  sum = max(sum, dsum1);
  int dsum2 = 0;
  for (int i = 0; i < 100; ++i) {
    dsum2 += arr[i][99 - i];
  }
  sum = max(sum, dsum2);

  cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T = 10;
  for (int t = 1; t <= T; ++t) {
    int tc;
    cin >> tc;
    cout << '#' << tc << ' ';
    solve();
  }
}
