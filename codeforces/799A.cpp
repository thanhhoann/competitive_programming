#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory.h>
#include <set>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

typedef long long LL;
typedef pair<int, int> PII;

int GLL(LL &x) { return scanf("%lld", &x); }

int GI(int &x) { return scanf("%d", &x); }

#define db(x) cout << #x << " = " << x << endl;

int n, t, k, d;

int main() {
  GI(n);
  GI(t);
  GI(k);
  GI(d);

  int currt = 0;

  while (currt <= d) {
    n -= k;
    currt += t;
    db(n);
    db(currt);
  }

  if (n > 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
