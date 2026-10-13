#include <bits/stdc++.h>
using namespace std;

const double yd_cm = 91.44;
const double in_cm = 2.54;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  double yd{2.1};
  double in{10.5};
  printf("%.1lfyd = %.1lfcm\n", yd, yd * yd_cm);
  printf("%.1lfin = %.1lfcm\n", in, in * in_cm);
}
