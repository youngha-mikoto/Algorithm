#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &i : arr) {
    cin >> i;
  }
  int ans = 0;
  for (int i = 2; i < n - 2; ++i) {
    int cur = arr[i];
    int mx = max({arr[i - 2], arr[i - 1], arr[i + 1], arr[i + 2]});
    ans += max(0, cur - mx);
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  T = 10;
  for (int t = 1; t <= T; ++t) {
    cout << '#' << t << ' ';
    solve();
  }
}
