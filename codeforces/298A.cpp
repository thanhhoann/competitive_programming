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
  string s;
  cin >> n >> s;

  int start = 0, end = 0;
  int R_L = 0;
  int end_R = 0;
  int end_L = 0;

  for (int i = 0; i < n; i++) {
    // CASE: R&L
    if (s[i] == 'R' && start == 0) {
      start = i + 1;
      R_L++;
    }
    if (s[i] == 'L' && end == 0) {
      end = i;
      R_L++;
    }
    // CASE: R
    if (s[i - 1] == 'R' && s[i] == '.' && s.find('L') == -1) {
      end_R = i + 1;
    }
    // CASE: L
    if (s[i - 1] == 'L' && s[i] == '.' && s.find('R') == -1) {
      end_L = i;
    }
  }

  if (R_L == 2)
    cout << start << ' ' << end;
  else if (end_R)
    cout << start << ' ' << end_R;
  else
    cout << end_L << ' ' << end;
}

int main() {
  solve();
  return 0;
}
