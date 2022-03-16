#include <algorithm>
#include <iostream>
#include <math.h>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s;
  set<char> set;

  getline(cin, s);

  for (auto c : s) {
    if (c != '{' && c != '}' && c != ',' && c != ' ') {
      set.insert(c);
    }
  }
  cout << set.size();
}

int main() {
  solve();
  return 0;
}
