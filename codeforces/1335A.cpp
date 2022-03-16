#include <algorithm>
#include <cmath>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  long double n;
  cin >> n;
  long double ans = roundl(n / 2) - 1;
  string s = to_string(ans);
  vector<char> temp;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '.') {
      for (auto const c : temp) {
        cout << c;
      }
      cout << '\n';
      return;
    } else {
      temp.push_back(s[i]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }

  return 0;
}
