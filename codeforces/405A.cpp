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
  int N[1000];
  for (int i = 1; i <= n; i++) {
    read(N[i]);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (N[i] > N[j]) {
        swap(N[i], N[j]);
      }
    }
  }

  for (int i = 1; i <= n; i++)
    write(N[i]);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
