#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (!(1 <= n && n <= 100 && n % 2 == 1)) {
    cout << "INPUT ERROR" << endl;
    return;
  }
  vector<vector<char>> arr(n, vector<char>(n, ' '));

  int k = 1;
  char c = 'A';
  for (int j = n / 2; j >= 0; --j) {
    int i = j;
    for (int rep = 0; rep < k; ++rep) {
      arr[i++][j] = c;
      if (c == 'Z') {
        c = 'A';
      } else {
        c++;
      }
    }
    k += 2;
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
