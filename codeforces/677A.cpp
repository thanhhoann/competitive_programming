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
  int n, h;
  read(n, h);

  int A[1000];

  int count = 0;

  for (int i = 1; i <= n; i++) {
    read(A[i]);
    if (A[i] > h)
      count += 2;
    else
      count += 1;
  }

  cout << count;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
