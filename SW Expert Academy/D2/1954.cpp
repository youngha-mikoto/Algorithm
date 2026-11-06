#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {0, 1, 0, -1};
const int dx[4] = {1, 0, -1, 0};

void print_arr(vector<vector<int>> &arr, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << '\n';
  }
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n, 0));
  int y = 0;
  int x = 0;
  int dir = 0;

  int num = 1;
  while (num <= n * n) {
    // 현재 위치에 숫자 기록
    arr[y][x] = num++;

    // 다음 위치 계산
    int ny = y + dy[dir];
    int nx = x + dx[dir];

    // 이동 불가능하면 방향 변경
    if ((ny >= n || nx >= n || ny < 0 || nx < 0) || (arr[ny][nx] != 0)) {
      dir = (dir + 1) % 4;
      ny = y + dy[dir];
      nx = x + dx[dir];
    }

    // 다음 위치로 이동
    y = ny;
    x = nx;
  }

  print_arr(arr, n);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    cout << '#' << t << '\n';
    solve();
  }
}
