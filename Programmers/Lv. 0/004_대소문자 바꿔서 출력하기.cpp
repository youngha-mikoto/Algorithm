#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string str;
  cin >> str;
  for (char c : str) {
    if (isupper(c))
      cout << (char)tolower(c);
    if (islower(c))
      cout << (char)toupper(c);
  }
  cout << '\n';
}
