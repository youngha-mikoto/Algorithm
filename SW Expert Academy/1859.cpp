#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];

  long long sum = 0;
  int maxp = v[n - 1];
  for (int i = n - 1; i >= 0; --i) {
    int curp = v[i];
    if (curp >= maxp) {
      maxp = curp;
    } else if (curp < maxp) {
      sum += (maxp - curp);
    }
  }

  cout << '#' << t << ' ' << sum << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t)
    solve(t);
}
