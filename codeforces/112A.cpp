#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

string tolower_str(string s) {
  string res;
  for (auto c : s) {
    res += tolower(c);
  }
  return res;
}

void solve() {
  string a, b;
  cin >> a >> b;

  a = tolower_str(a);
  b = tolower_str(b);

  a < b ? (cout << -1) : ((b < a) ? (cout << 1) : (cout << 0));
}

int main() {
  solve();
  return 0;
}
