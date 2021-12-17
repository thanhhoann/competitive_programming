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
  int k, l, m, n, d, A[100000];
  read(k, l, m, n, d);

  For_equal(i, 1, d) A[i] = i;

  if (k <= d)
    for (int i = k; i <= d; i += k) {
      A[i] = 0;
    }

  if (l <= d)
    for (int i = l; i <= d; i += l) {
      if (A[i] != 0)
        A[i] = 0;
      else
        continue;
    }

  if (m <= d)
    for (int i = m; i <= d; i += m) {
      if (A[i] != 0)
        A[i] = 0;
      else
        continue;
    }

  if (n <= d)
    for (int i = n; i <= d; i += n) {
      if (A[i] != 0)
        A[i] = 0;
      else
        continue;
    }

  int count = 0;

  For_equal(i, 1, d) {
    if (A[i] != 0) {
      count++;
    }
  }

  cout << d - count;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
