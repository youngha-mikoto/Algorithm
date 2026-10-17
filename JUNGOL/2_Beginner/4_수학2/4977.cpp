#include <bits/stdc++.h>
using namespace std;

void solve() {
  double d;
  cin >> d;

  int integerPart = (int)d;
  double fractionalPart = d - integerPart;

  string s1 = "";
  string s2 = "";

  // integerPart
  while (integerPart != 0) {
    s1 += to_string(integerPart % 2);
    integerPart /= 2;
  }
  reverse(s1.begin(), s1.end());
  if (s1 == "")
    s1 = "0";

  // fractionalPart
  for (int i = 0; i < 4; ++i) {
    fractionalPart *= 2;
    s2 += to_string((int)fractionalPart);
    fractionalPart -= (int)fractionalPart;
  }

  // output
  cout << s1 << '.' << s2 << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
