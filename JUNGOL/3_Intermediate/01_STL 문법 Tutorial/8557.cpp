#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  for (auto i : v) {
    cout << i.first * i.second << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
