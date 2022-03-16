#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, m;
  cin >> n >> m;

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0) {
        cout << '#';
      } else if ((j == (m - 1) && count % 2 == 0) ||
                 (j == 0 && count % 2 == 1)) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    if (i % 2 == 1)
      count++;
    cout << '\n';
  }
}

int main() {
  solve();
  return 0;
}
