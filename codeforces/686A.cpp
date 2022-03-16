#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  ll x;
  cin >> n >> x;

  char oper;
  ll d;

  ll packs = x, sad_kids = 0;

  while (n--) {
    cin >> oper >> d;

    if (oper == '-') {
      if (packs - d < 0) {
        sad_kids++;
      } else {
        /* db(packs - d); */
        packs -= d;
      }
    } else if (oper == '+') {
      /* db(packs + d); */
      packs += d;
    }
  }
  cout << packs << ' ' << sad_kids;
}

int main() {
  solve();
  return 0;
}
