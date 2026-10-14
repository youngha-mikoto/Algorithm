#include <bits/stdc++.h>
using namespace std;

void solve() {
  while (1) {
    string s;
    cin >> s;
    if (s == "0")
      return;
    reverse(s.begin(), s.end());

    // remove leading zero
    while (s[0] == '0') {
      s.erase(0, 1);
    }

    int sum = 0;
    for (char c : s)
      sum += (c - '0');
    cout << s << ' ' << sum << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
