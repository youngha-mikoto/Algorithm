#include <bits/stdc++.h>
using namespace std;

int foo(int a, int b) { return stoi(to_string(a) + to_string(b)); }

int solution(int a, int b) { return max(foo(a, b), 2 * a * b); }
