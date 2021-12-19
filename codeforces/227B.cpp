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

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename... T> auto sum(T... args) { return (args + ...); }
template <typename... T> void read(T &...args) { ((cin >> args), ...); }
template <typename... T> void write(T &&...args) {
  ((cout << args << " "), ...);
}

#define ul unsigned long
#define ll long long
#define pb push_back
#define PI (3.14159265)
#define F first
#define S second

#define db(x) cout << #x << " = " << x << endl;
#define For(i, k, n) for (unsigned long i = k; i < n; i++)
#define For_equal(i, k, n) for (unsigned long i = k; i <= n; i++)
#define For_map(map) for (const auto &e : map)

void solve() {
  int n, N[100000];
  read(n);
  For_equal(i, 1, n) read(N[i]);

  int m, M[100000];
  read(m);
  For_equal(i, 1, m) read(M[i]);

  int count_ascend = 0;
  int count_descend = 0;


  // linear search too slow !

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      count_ascend++;
      if (M[i] == N[j])
        break;
    }

    for (int j = n; j >= 1; j--) {
      count_descend++;
      if (M[i] == N[j]) {
        break;
      }
    }
  }

  cout << count_ascend << " " << count_descend;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
