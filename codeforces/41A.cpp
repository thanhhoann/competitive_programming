#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s, t;
  cin >> s >> t;

  vector<char> temp;
  for (int i = s.length() - 1; i >= 0; i--) {
    temp.push_back(s[i]);
  }

  for (int i = 0; i < t.length(); i++) {
    if (t[i] == temp[i])
      continue;
    else {
      cout << "NO";
      return;
    }
  }
  cout << "YES";
}

int main() {
  solve();
  return 0;
}
