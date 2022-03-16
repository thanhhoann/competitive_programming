#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int count = 0;
    cin >> a >> b;
    if (a % b != 0) {
      cout << b - a % b;
    } else {
      cout << 0;
    }
    cout << "\n";
  }
}

int main() {
  solve();
  return 0;
}
