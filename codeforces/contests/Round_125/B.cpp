#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;
template <class T> void _db(vector<T> nums) {
  cerr << "[ ";
  for (T num : nums)
    cerr << num << ' ';
  cerr << " ]";
}

void solve() {
  ll n, b, x, y;
  cin >> n >> b >> x >> y;
  ll temp = 0, sum = 0;
  for (int i = 1; i <= n; i++) {
    temp = max(temp + x, temp - y);
    sum += temp;
    db(sum);
  }
  cout << sum << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}
