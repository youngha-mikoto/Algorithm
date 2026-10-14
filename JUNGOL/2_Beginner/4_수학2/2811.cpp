#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

void solve() {
  for (int i = 0; i < 5; ++i) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << "number one" << endl;
      continue;
    }
    if (isPrime(n)) {
      cout << "prime number" << endl;
    } else {
      cout << "composite number" << endl;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
