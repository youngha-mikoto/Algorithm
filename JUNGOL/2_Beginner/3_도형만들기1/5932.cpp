#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 1) {
      for (int j = 1; j <= n; ++j)
        cout << j << ' ';
    } else {
      for (int j = n; j >= 1; --j)
        cout << j << ' ';
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
