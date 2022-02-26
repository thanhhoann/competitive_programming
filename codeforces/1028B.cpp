#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define d(x) cout << #x << " = " << x << endl;

int s(string num) {
  int sum = 0;
  for (auto const c : num) {
    sum += c - '0';
  }
  return sum;
}

int s_ab(string a, string b) {
  ll num_a = stoi(a);
  ll num_b = stoi(b);
  ll num_ab = num_a + num_b;
  ll sum = 0;
  for (auto const c : to_string(num_ab))
    sum += c - '0';
  return sum;
}

void solve() {
  int n, m;
  cin >> n >> m;
  string a, b;
  int count = 0;
  while (s(b) <= n) {
    a += '9';
    b += '9';
    count++;
  }
  if (a.length() > 1) {
    for (int i = 0; i < count - 1; i++) {
      a += '0';
    }
  }
  a += '1';
  cout << a << endl << b;
}

int main() {
  solve();
  return 0;
}
