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

  int num = 0, deno = 6; // numerator & denominator

  num = deno - max(a, b) + 1;

  if (num == 6)
    cout << "1/1";
  else if (num == 0)
    cout << "0/1";
  else {
    if (deno % num == 0) {
      deno /= num;
      num /= num;
    } else if (num == 4) {
      deno /= 2;
      num /= 2;
    }
    cout << num << "/" << deno;
  }
}

int main() {
  solve();
  return 0;
}
