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
  int n;
  read(n);

  int A[100];

  int max = 0, min = A[0];
  int i_max = 0, i_min = 0;

  For(i, 0, n) {
    read(A[i]);

    if (A[i] > max) {
      max = A[i];
      i_max = i;
    }
    if (A[i] <= min) {
      min = A[i];
      i_min = i;
    }
  }

  db(i_max);
  db(i_min);

  if (A[i_max] == A[0] && A[i_min] == A[n - 1])
    cout << 0;
  else if (i_max > i_min)
    cout << i_max + (n - 2 - i_min);
  else
    cout << i_max + (n - 1 - i_min);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
