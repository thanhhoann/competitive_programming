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
  int n;
  read(n);
  string s;
  read(s);

  int d = 0, a = 0;

  for (auto c : s) {
    if (c == 'A')
      a++;
    if (c == 'D')
      d++;
  }

  cout << (a > d ? "Anton" : (a == d) ? "Friendship" : "Danik");
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
