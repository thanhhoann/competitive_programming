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
  string s;
  read(s);

  int sz = s.size();

  cout << ((sz % 2 == 0 && s.substr(0, sz / 2) == s.substr(sz / 2)) ? "YES"
                                                                    : "NO")
       << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int ts;
  read(ts);
  while (ts--) {
    solve();
  }

  return 0;
}
