#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int A[6][6];
  int pos_x = 0;
  int pos_y = 0;

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      cin >> A[i][j];
      if (A[i][j] == 1) {
        pos_x = i;
        pos_y = j;
      }
    }
  }

  int ans = 0;

  if (pos_x != 3) {
    ans = abs(pos_x - 3) + abs(pos_y - 3);
  } else if (pos_x == 3) {
    ans = abs(3 - pos_y);
  } else if (pos_y == 3) {
    ans = abs(3 - pos_x);
  }

  cout << ans;
}

int main() {
  solve();
  return 0;
}
