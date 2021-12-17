/* Answer:  */

#include <algorithm>
#include <array>
#include <chrono>
#include <deque>
#include <fstream>
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

// life_sp = oxy_gen * co2
// - consider only first bit
// - remove nums don't match the criteria
// - only have 1, stop -> result
// - if not found, move on to the next col

void solve() {

  int A[1000][1000];
  string num;

  int no_rows = 1000, no_cols = 12;

  For(i, 0, no_rows) {
    cin >> num;
    int j = 0;
    for (const auto &n : num) {
      int t = n - '0';
      A[i][j] = t;
      j++;
    }
  }

  cout << endl;

  int count_0 = 0, count_1 = 0;

  vector<int> oxy_gen;
  vector<int> epsilon_rate;

  For(j, 0, no_cols) {
    For(i, 0, no_rows) {
      if (A[i][j] == 0)
        count_0++;
      else
        count_1++;
    }

    if (count_0 > count_1) {
      gamma_rate.pb(0);
      epsilon_rate.pb(1);
    } else {
      gamma_rate.pb(1);
      epsilon_rate.pb(0);
    }

    count_0 = 0;
    count_1 = 0;
  }

  cout << "gamma rate = ";
  For(i, 0, no_cols) { cout << gamma_rate[i]; }

  cout << "\nepsilon rate = ";
  For(i, 0, no_cols) cout << epsilon_rate[i];
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
