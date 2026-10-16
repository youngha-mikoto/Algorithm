#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());

  int sum = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '1')
      sum += pow(2, i);
  }
  cout << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
