#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;
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

  vector<int> primeList;
  for (int i = m; i <= n; ++i) {
    if (isPrime[i])
      primeList.push_back(i);
  }

  if (primeList.empty()) {
    cout << -1 << '\n';
  } else {
    cout << accumulate(primeList.begin(), primeList.end(), 0) << '\n';
    cout << primeList[0] << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
