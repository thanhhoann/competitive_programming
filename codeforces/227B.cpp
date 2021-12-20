#include <algorithm>
#include <array>
#include <chrono>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

template <typename... T> void read(T &...args) { ((cin >> args), ...); }
template <typename... T> void write(T &&...args) {
  ((cout << args << " "), ...);
}

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, a_i, A[100001];
  read(n);

  for (int i = 1; i <= n; ++i) {
    read(a_i);
    A[a_i] = i;
  }

  int m, b_i;
  read(m);

  ll Vasya(0), Petya(0);

  while (m--) {
    read(b_i);
    Vasya += A[b_i];
    Petya += (n + 1 - A[b_i]);
  }
  write(Vasya, Petya);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
