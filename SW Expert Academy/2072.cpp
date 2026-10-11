#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
      int num;
      cin >> num;
      if (num % 2 == 1)
        sum += num;
    }
    cout << '#' << t << ' ' << sum << '\n';
  }
}
