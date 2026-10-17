#include <bits/stdc++.h>
using namespace std;

struct Rect {
  int width, height;
  bool operator<(const Rect &Right) const {
    return width * height < Right.width * Right.height;
  }
  bool operator>(const Rect &Right) const {
    return width * height > Right.width * Right.height;
  }
  bool operator==(const Rect &Right) const {
    return width * height == Right.width * Right.height;
  }
  Rect operator+(const Rect &Right) const {
    return (Rect){width + Right.width, height + Right.height};
  }
} a, b, c, d;

void solve() {
  scanf("%d %d", &a.width, &a.height);
  scanf("%d %d", &b.width, &b.height);
  scanf("%d %d", &c.width, &c.height);
  scanf("%d %d", &d.width, &d.height);

  if (a + b < c + d) {
    cout << "Left Small" << '\n';
  } else if (a + b > c + d) {
    cout << "Right Small" << '\n';
  } else {
    cout << "Same" << '\n';
  }
}

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(NULL);
  solve();
}
