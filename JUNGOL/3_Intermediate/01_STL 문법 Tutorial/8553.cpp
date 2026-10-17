#include <bits/stdc++.h>
using namespace std;

bool comp(int left, int right) {
  if (left % 10 != right % 10) {
    return (left % 10) < (right % 10);
  }
  if ((left / 10) % 10 != (right / 10) % 10) {
    return ((left / 10) % 10) < ((right / 10) % 10);
  }
  return (left / 100) < (right / 100);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), comp);
  for (int i : a) {
    cout << i << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
