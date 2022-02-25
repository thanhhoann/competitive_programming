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

  string a;
  for (auto const c : s) {
    char ch = tolower(c);
    if (ch == 'a' || ch == 'e' || ch == 'u' || ch == 'i' || ch == 'o' ||
        ch == 'y') {
      continue;
    } else {
      a += '.';
      a += ch;
    }
  }

  for (const auto c : a)
    cout << c;
}

int main() {
  solve();
  return 0;
}
