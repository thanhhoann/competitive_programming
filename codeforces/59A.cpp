#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s;
  cin >> s;

  int upper = 0, lower = 0;
  for (auto const c : s) {
    if (isupper(c))
      upper++;
    else
      lower++;
  }

  string res;

  if (upper > lower)
    for (auto c : s) {
      res += toupper(c);
    }
  else
    for (auto c : s) {
      res += tolower(c);
    }

  cout << res;
}

int main() {
  solve();
  return 0;
}
