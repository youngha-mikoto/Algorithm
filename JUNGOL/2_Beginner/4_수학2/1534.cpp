#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, b;
  cin >> n >> b;
  string ans = "";
  while (n != 0) {
    if (n % b < 10) {
      ans += to_string(n % b);
    } else {
      ans += ((n % b) - 10 + 'A');
      // if (n % b == 10)
      //   ans += 'A';
      // if (n % b == 11)
      //   ans += 'B';
      // if (n % b == 12)
      //   ans += 'C';
      // if (n % b == 13)
      //   ans += 'D';
      // if (n % b == 14)
      //   ans += 'E';
      // if (n % b == 15)
      //   ans += 'F';
    }
    n /= b;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
