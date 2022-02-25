#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    int count = 0;
    for (int j = 0; j <= k; j++) {
      if (s.find(to_string(j)) != -1)
        count++;
    }
    if (count == k + 1) {
      ans++;
    }
  }
  cout << ans;
}

int main() {
  solve();
  return 0;
}
