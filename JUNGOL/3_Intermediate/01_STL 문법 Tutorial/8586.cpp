#include <bits/stdc++.h>
using namespace std;

array<int, 5> a[100005];

bool comp(array<int, 5> arr1, array<int, 5> arr2) {
  if (arr1[0] != arr2[0]) {
    return arr1[0] < arr2[0];
  }
  if (arr1[1] != arr2[1]) {
    return arr1[1] > arr2[1];
  }
  if (arr1[2] != arr2[2]) {
    return arr1[2] < arr2[2];
  }
  if (arr1[3] != arr2[3]) {
    return arr1[3] > arr2[3];
  }
  return arr1[4] < arr2[4];
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    array<int, 5> arr;
    for (int j = 0; j < 5; ++j) {
      cin >> arr[j];
    }
    a[i] = arr;
  }

  sort(a, a + n, comp);
  for (int i = 0; i < n; ++i) {
    array<int, 5> arr = a[i];
    for (int j : arr) {
      cout << j << ' ';
    }
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
