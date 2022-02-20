#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int k, r;
  cin >> k >> r;

  for (int i = 1; i <= 10; i++) {
    int a = k * i;
    int b = (a - r);

    if (a % 10 == 0 || b % 10 == 0) {
      cout << i;
      return;
    }
  }
}

int main() {
  solve();
  return 0;
}
