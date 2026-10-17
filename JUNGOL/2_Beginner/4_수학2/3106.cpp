#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll llpow(ll p, ll q) {
  ll res = 1;
  for (ll i = 0; i < q; ++i) {
    res *= p;
  }
  return res;
}

ll a_base_to_ten_base(string s, ll a) {
  reverse(s.begin(), s.end());
  ll res = 0;
  for (ll i = 0; i < s.length(); ++i) {
    ll p;
    if (isdigit(s[i])) {
      p = s[i] - '0';
    } else {
      p = s[i] - 'A' + 10;
    }
    res += p * llpow(a, i);
  }
  return res;
}

string ten_base_to_b_base(ll n, ll b) {
  string res = "";
  while (n != 0) {
    if (n % b < 10) {
      res += to_string(n % b);
    } else {
      res += ((n % b) - 10 + 'A');
    }
    n /= b;
  }
  reverse(res.begin(), res.end());
  if (res == "") {
    res = "0";
  }
  return res;
}

void solve() {
  while (1) {
    ll a;
    cin >> a;
    if (a == 0) {
      break;
    }
    string s;
    ll b;
    cin >> s >> b;
    cout << ten_base_to_b_base(a_base_to_ten_base(s, a), b) << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
