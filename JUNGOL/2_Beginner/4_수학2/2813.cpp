#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000000;
vector<bool> isPrime(MAX_N + 1, 1);

void sieve() {
  isPrime[0] = 0;
  isPrime[1] = 0;
  for (int i = 2; i * i <= MAX_N; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAX_N; j += i) {
        isPrime[j] = 0;
      }
    }
  }
}

void solve() {
  sieve();
  int m, n;
  cin >> m >> n;
  int ans = 0;
  for (int i = m; i <= n; ++i) {
    if (isPrime[i])
      ans++;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
