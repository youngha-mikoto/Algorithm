#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int x, y;
  cin >> x >> y;

  // 1
  reverse(a.begin() + x, a.begin() + y + 1);
  for (int i : a) {
    cout << i << ' ';
  }
  cout << '\n';

  // 2
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for (int i : a) {
    cout << i << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
