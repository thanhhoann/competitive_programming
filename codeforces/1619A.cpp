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

  if (s.length() == 1) {
    cout << "NO\n";
    return;
  }

  vector<char> S;
  for (auto c : s) {
    S.push_back(c);
  }

  size_t const half_size = S.size() / 2;
  vector<char> half1(S.begin(), S.begin() + half_size);
  vector<char> half2(S.begin() + half_size, S.end());

  if (half1.size() != half2.size()) {
    cout << "NO\n";
    return;
  }

  for (int i = 0; i < s.length() / 2; i++) {
    if (half1[i] != half2[i]) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int ts;
  read(ts);
  while (ts--) {
    /* cout << endl << "TEST " << ts << endl; */
    solve();
  }

  return 0;
}
