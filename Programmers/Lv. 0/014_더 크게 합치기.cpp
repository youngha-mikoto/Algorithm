#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b) {
  string str_a = to_string(a);
  string str_b = to_string(b);
  int sum1 = stoi(str_a + str_b);
  int sum2 = stoi(str_b + str_a);
  return max(sum1, sum2);
}
