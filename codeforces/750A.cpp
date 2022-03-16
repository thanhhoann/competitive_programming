#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, k;
  cin >> n >> k;

  int time = 0;
  int i = 1;

  for (int i = 1; i <= n; i++) {
    time += i * 5;
    if ((time + k) > 240) {
      cout << i - 1;
      return;
    }
  }
  cout << n;
}

int main() {
  solve();
  return 0;
}
