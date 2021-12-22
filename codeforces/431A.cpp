#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int a, b, c, d, N[5];
  cin >> a >> b >> c >> d;
  string s;
  cin >> s;

  N[1] = a;
  N[2] = b;
  N[3] = c;
  N[4] = d;

  int sum = 0;

  for (auto &n : s)
    sum += N[n - '0'];

  cout << sum;
}

int main() {
  solve();
  return 0;
}
