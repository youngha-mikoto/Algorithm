#include <bits/stdc++.h>
using namespace std;

const int MAX_M = 1000000;

void solve() {
  vector<int> isPrime(MAX_M + 1, 1);
  isPrime[0] = 0;
  isPrime[1] = 0;
  for (int i = 2; i * i <= MAX_M; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAX_M; j += i) {
        isPrime[j] = 0;
      }
    }
  }

  int n, m;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> m;

    if (isPrime[m]) {
      cout << m << endl;
      continue;
    }

    int a = m - 1;
    int b = m + 1;
    while (1 <= a || b <= MAX_M) {
      if (!isPrime[a] && !isPrime[b]) {
        if (1 <= a - 1)
          a--;
        if (b + 1 <= MAX_M)
          b++;
        continue;
      }

      if (isPrime[a])
        cout << a << ' ';
      if (isPrime[b])
        cout << b << ' ';
      cout << endl;
      break;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
