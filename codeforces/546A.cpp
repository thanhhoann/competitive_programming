#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int k, n, w;
  cin >> k >> n >> w;

  int pay = 0;
  for (int i = 1; i <= w; i++) {
    pay += i * k;
  }

  if (pay > n)
    cout << pay - n;
  else
    cout << 0;
}

int main() {
  solve();
  return 0;
}
