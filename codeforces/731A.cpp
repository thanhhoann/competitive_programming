#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s;
  cin >> s;

  int ans = 0;
  int d_0 = 0, d_1 = 0;
  char start = 'a';

  for (auto c : s) {
    d_0 = abs(start - c);      // clockwise
    d_1 = 26 - abs(start - c); // anti-clockwise

    ans += min(d_0, d_1);

    start = c;
  }
  cout << ans;
}

int main() {
  solve();
  return 0;
}
