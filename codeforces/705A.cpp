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
  cin >> n;
  string ans;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans += "I hate";
    } else if (i % 2 == 1) {
      ans += "I love";
    }

    count++;
    if (count > 0 && count <= (n - 1)) {
      ans += " that ";
    }
  }

  ans += " it";
  cout << ans;
}

int main() {
  solve();
  return 0;
}
