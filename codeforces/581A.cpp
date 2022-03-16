#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int a, b;
  cin >> a >> b;

  int p = min(a, b);
  int q = (max(a, b) - p) / 2;
  cout << p << ' ' << q;
}

int main() {
  solve();
  return 0;
}
