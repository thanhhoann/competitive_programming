#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, h;
  cin >> n >> h;
  int num;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num > h)
      ans += 2;
    else
      ans += 1;
  }

  cout << ans;
}

int main() {
  solve();
  return 0;
}
