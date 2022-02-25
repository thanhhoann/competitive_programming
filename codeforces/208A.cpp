#include <algorithm>
#include <iostream>
#include <math.h>
#include <regex>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s;
  cin >> s;
  vector<int> indexes;

  for (int i = 0; i < s.length(); i++) {
    int count = 0;
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      i += 2;
    } else {
      indexes.push_back(i);
    }
  }

  for (int i = 0; i < indexes.size(); i++) {
    int curr = indexes[i];
    int next = indexes[i + 1];
    int diff = next - curr;

    cout << s[curr];
    if (diff > 1)
      cout << " ";
  }
}

int main() {
  solve();
  return 0;
}
