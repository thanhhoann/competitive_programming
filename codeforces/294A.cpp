#include <algorithm>
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
  int N[n];
  for (int i = 1; i <= n; i++)
    cin >> N[i];

  int m;
  cin >> m;
  int x, y;
  for (int i = 1; i <= m; i++) {
    cin >> x >> y;

    N[x + 1] += N[x] - y;
    N[x - 1] += y - 1;
    N[x] = 0;
  }
  for (int i = 1; i <= n; i++) {
    cout << N[i] << "\n";
  }
}

int main() {
  solve();
  return 0;
}
