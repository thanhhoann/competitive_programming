#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

int counter_clockwise(char a, char b) { return 26 - abs(a - b); }
int clockwise(char a, char b) { return abs(a - b); }

void solve() {
  string s;
  cin >> s;

  int sum = clockwise('a', s[0]) > counter_clockwise('a', s[0])
                ? counter_clockwise('a', s[0])
                : clockwise('a', s[0]);

  for (int i = 0; i < s.length() - 1; i++) {
    int a = clockwise(s[i], s[i + 1]);
    int b = counter_clockwise(s[i], s[i + 1]);

    if (a > b)
      sum += b;
    else
      sum += a;
  }

  cout << sum;
}

int main() {
  solve();
  return 0;
}
