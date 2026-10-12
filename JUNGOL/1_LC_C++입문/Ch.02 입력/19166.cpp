#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int r = 5;
  double PI = 3.14;
  printf("Circumference = %d * 2 * %.2lf = %.1lf\n", r, PI, r * 2 * PI);
  printf("Area = %d * %d * %.2lf = %.1lf\n", r, r, PI, r * r * PI);
}
