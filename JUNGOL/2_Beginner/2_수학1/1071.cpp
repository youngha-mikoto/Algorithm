#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  int m;
  cin >> m;

  int sum1 = 0;
  int sum2 = 0;
  for (int i : v) {
    if (m % i == 0)
      sum1 += i;
    if (i % m == 0)
      sum2 += i;
  }

  cout << sum1 << endl;
  cout << sum2 << endl;
}
