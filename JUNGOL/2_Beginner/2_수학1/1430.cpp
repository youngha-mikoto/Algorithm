#include <bits/stdc++.h>
using namespace std;

int cnt[10];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a >> b >> c;
  int product = a * b * c;
  string s = to_string(product);

  for (char c : s) {
    int i = (c - '0');
    cnt[i]++;
  }

  for (int i = 0; i < 10; ++i)
    cout << cnt[i] << endl;
}
