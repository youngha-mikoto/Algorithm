#include <bits/stdc++.h>
using namespace std;

void solve() {
  int dump;
  int arr[100];
  cin >> dump;
  for (int i = 0; i < 100; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < dump; ++i) {
    int *mx_p = max_element(arr, arr + 100);
    int *mn_p = min_element(arr, arr + 100);
    if (*mx_p - *mn_p <= 1) {
      cout << *mx_p - *mn_p << '\n';
      return;
    }
    (*mx_p)--;
    (*mn_p)++;
  }

  int *mx_p = max_element(arr, arr + 100);
  int *mn_p = min_element(arr, arr + 100);
  cout << *mx_p - *mn_p << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T = 10;
  for (int t = 1; t <= T; ++t) {
    cout << '#' << t << ' ';
    solve();
  }
}
