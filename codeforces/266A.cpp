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

  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1])
      count++;
  }

  cout << count;
}

int main() {
  solve();
  return 0;
}
