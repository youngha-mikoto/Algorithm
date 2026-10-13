#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long p, v, k;
  cin >> p >> v >> k;
  p++;
  v++;

  long long L = lcm(p, v);

  long long a, b, c, d;
  b = k / L;
  c = k / v - b;
  d = k / p - b;
  a = k - c - d - b;

  cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
}
