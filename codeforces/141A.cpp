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
  string s[3];

  vector<char> v;

  For(i, 0, 3) read(s[i]);

  For(i, 0, 2) for (auto c : s[i]) v.pb(c);

  For(i, 0, s[2].length()) {
    for (int j = 0; j < s[2].length(); j++) {
      if (v[i] == s[2][j]) {
        s[2][j] = ' ';
        db(s[2]);
      }
    }
  }

  int count = 0;
  For(i, 0, s[2].length()) if (s[2][i] != ' ') count++;

  if (count == 0)
    cout << "YES";
  else
    cout << "NO";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
