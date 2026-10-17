#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> v(10);
  for (int &i : v) {
    cin >> i;
    i++;
  }
  sort(v.begin(), v.end());
  for (int i : v) {
    cout << i << ' ';
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
