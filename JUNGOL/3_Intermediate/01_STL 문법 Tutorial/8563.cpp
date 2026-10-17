#include <bits/stdc++.h>
using namespace std;

struct Person {
  int age;
  double height;
};

bool comp1(Person p1, Person p2) {
  if (p1.age != p2.age) {
    return p1.age > p2.age;
  }
  return p1.height > p2.height;
}

bool comp2(Person p1, Person p2) {
  if (p1.height != p2.height) {
    return p1.height < p2.height;
  }
  return p1.age < p2.age;
}

void solve() {
  int n;
  cin >> n;
  vector<Person> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].age >> v[i].height;
  }

  sort(v.begin(), v.end(), comp1);
  for (Person p : v) {
    cout << p.age << ' ' << fixed << setprecision(1) << p.height << '\n';
  }
  cout << '\n';
  sort(v.begin(), v.end(), comp2);
  for (Person p : v) {
    cout << p.age << ' ' << fixed << setprecision(1) << p.height << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
