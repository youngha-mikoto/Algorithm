#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n * m; ++i) {
    cout << i << ' ';
    if (i % m == 0)
      cout << endl;
  }
}
