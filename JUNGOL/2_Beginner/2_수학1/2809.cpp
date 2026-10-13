#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> v{};
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      int j = n / i;
      if (i == j) {
        v.push_back(i);
      } else {
        v.push_back(i);
        v.push_back(j);
      }
    }
  }

  sort(v.begin(), v.end());

  for (int i : v)
    cout << i << ' ';
}
