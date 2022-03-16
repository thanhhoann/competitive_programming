#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << 8 << ' ' << n - 8;
  else
    cout << 9 << ' ' << n - 9;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
