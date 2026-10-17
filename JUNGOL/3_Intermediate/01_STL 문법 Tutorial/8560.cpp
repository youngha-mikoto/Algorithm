#include <bits/stdc++.h>
using namespace std;

struct Player {
  string name;
  int age;
};

bool comp(Player p1, Player p2) {
  if (p1.age != p2.age) {
    return p1.age > p2.age;
  }
  return p1.name < p2.name;
}

void solve() {
  vector<Player> v(10);
  for (auto &p : v) {
    cin >> p.name >> p.age;
  }
  sort(v.begin(), v.end(), comp);
  for (auto player : v) {
    cout << player.name << ' ' << player.age << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
