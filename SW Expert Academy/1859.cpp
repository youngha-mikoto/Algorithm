#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
  int n;
  cin >> n;
  vector<int> prices(n);
  for (int i = 0; i < n; ++i)
    cin >> prices[i];

  long long profit = 0;
  int max_price = prices[n - 1];
  for (int i = n - 2; i >= 0; --i) {
    int price = prices[i];
    if (price >= max_price) {
      max_price = price;
    } else {
      profit += (max_price - price);
    }
  }

  cout << '#' << t << ' ' << profit << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t)
    solve(t);
}
