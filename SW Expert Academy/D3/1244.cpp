#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  int n;
  cin >> s >> n;

  map<pair<string, int>, bool> visited;
  // string: 현재 숫자판의 배치
  // int: 지금까지 교환한 횟수
  // bool: 해당 상태를 방문했는지 여부

  queue<pair<string, int>> q;

  visited[{s, 0}] = 1;
  q.push({s, 0});
  while (!q.empty()) {
    string cur = q.front().first;
    int cur_swap = q.front().second;
    q.pop();
    if (cur_swap == n) {
      continue;
    }
    for (int i = 0; i < s.size(); ++i) {
      for (int j = i + 1; j < s.size(); ++j) {
        string new_str = cur;
        int new_swap = cur_swap;
        swap(new_str[i], new_str[j]);
        new_swap++;
        if (!visited[{new_str, new_swap}]) {
          visited[{new_str, new_swap}] = 1;
          q.push({new_str, new_swap});
        }
      }
    }
  } // end of BFS

  int mx = -1;
  for (auto &i : visited) {
    if (i.first.second == n) {
      mx = max(mx, stoi(i.first.first));
    }
  }
  cout << mx << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    cout << '#' << t << ' ';
    solve();
  }
}
