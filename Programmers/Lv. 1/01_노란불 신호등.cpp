#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int is_yellow(int t, int i, vector<vector<int>> signals) {
  int cycle_i = signals[i][0] + signals[i][1] + signals[i][2];
  if (signals[i][0] + 1 <= t % cycle_i &&
      t % cycle_i <= signals[i][0] + signals[i][1])
    return 1;
  return 0;
}

int solution(vector<vector<int>> signals) {
  int answer = -1;

  int cycle0 = signals[0][0] + signals[0][1] + signals[0][2];
  int cycle1 = signals[1][0] + signals[1][1] + signals[1][2];
  int cycle = lcm(cycle0, cycle1);
  for (int i = 2; i < signals.size(); ++i) {
    int cycle_i = signals[i][0] + signals[i][1] + signals[i][2];
    cycle = lcm(cycle, cycle_i);
  }

  for (int t = 1; t <= cycle; ++t) {
    int flag = 1;
    for (int i = 0; i < signals.size(); ++i) {
      if (is_yellow(t, i, signals) == 0)
        flag = 0;
    }
    if (flag == 1) {
      answer = t;
      break;
    }
  }

  return answer;
}
