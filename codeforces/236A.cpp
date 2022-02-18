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

  int count = 0;

  sort(s.begin(), s.end());

  for (int i = 0; i < s.length(); i++)
    if (s[i] == s[i + 1])
      count++;

  (s.length() - count) % 2 == 1 ? cout << "IGNORE HIM!"
                                : cout << "CHAT WITH HER!";
}

int main() {
  solve();
  return 0;
}
