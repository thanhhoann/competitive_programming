#include <algorithm>
#include <functional>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  cin >> n;
  int N[1001];
  vector<int> Sereja, Dima;

  for (int i = 1; i <= n; i++) {
    cin >> N[i];
  }

  int l = 1, r = n;
  int turn = 1;

  while (l <= r) {
    if (N[l] >= N[r]) {
      if (turn % 2 != 0) {
        Sereja.push_back(N[l]);
      } else {
        Dima.push_back(N[l]);
      }
      l++;
    } else if (N[l] < N[r]) {
      if (turn % 2 != 0) {
        Sereja.push_back(N[r]);
      } else {
        Dima.push_back(N[r]);
      }
      r--;
    }
    turn++;
  }

  int s_S = 0, s_D = 0;
  for (auto e : Sereja) {
    s_S += e;
  }
  for (auto e : Dima) {
    s_D += e;
  }

  cout << s_S << ' ' << s_D;
}

int main() {
  solve();
  return 0;
}
