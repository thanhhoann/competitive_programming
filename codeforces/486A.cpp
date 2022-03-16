#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  ll n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n / 2;
  } else if (n % 2 == 1) {
    cout << (n / 2) - n;
  }
}

int main() {
  solve();
  return 0;
}
