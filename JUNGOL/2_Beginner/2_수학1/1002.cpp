#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];

  int G = gcd(v[0], v[1]);
  int L = lcm(v[0], v[1]);
  for (int i = 2; i < n; ++i) {
    G = gcd(G, v[i]);
    L = lcm(L, v[i]);
  }

  cout << G << ' ' << L << endl;
}
