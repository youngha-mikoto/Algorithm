#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int ans = 1;                                                        // L
  if (s.find("010") != string::npos || s.find("101") != string::npos) // L-2
    ans++;
  if (s.find("000") != string::npos || s.find("111") != string::npos) // L+2
    ans++;
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
    solve();
}
