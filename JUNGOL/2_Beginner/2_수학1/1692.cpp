#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n1, n2;
  cin >> n1 >> n2;
  int a = to_string(n2)[0] - '0';
  int b = to_string(n2)[1] - '0';
  int c = to_string(n2)[2] - '0';

  cout << n1 * c << endl;
  cout << n1 * b << endl;
  cout << n1 * a << endl;
  cout << n1 * n2 << endl;
}
