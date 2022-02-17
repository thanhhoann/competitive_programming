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

  int count = 0;

  while (a <= b) {
    a *= 3;
    b *= 2;
    count++;
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
