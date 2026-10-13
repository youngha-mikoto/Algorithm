#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int line = 1; line <= n; ++line) {
    int start = line;
    for (int j = 0; j < n; ++j) {
      cout << start << ' ';
      start += n;
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
