#include <bits/stdc++.h>
using namespace std;

void solve() {
  int cnt[101] = {0};
  for (int i = 0; i < 1000; ++i) {
    int score;
    cin >> score;
    cnt[score]++;
  }
  int mx = -1;
  for (int i = 0; i <= 100; ++i) {
    mx = max(mx, cnt[i]);
  }
  for (int i = 100; i >= 0; --i) {
    if (cnt[i] == mx) {
      cout << i << '\n';
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    int t;
    cin >> t;
    cout << '#' << t << ' ';
    solve();
  }
}
