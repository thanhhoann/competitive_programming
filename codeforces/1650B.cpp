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
  int l, r, a;
  cin >> l >> r >> a;

  int res = 0;

  int temp = 0;
  if (a % 2 == 0)
    temp = 1;
  else
    temp = 2;

  for (int i = l; i <= r; i += temp) {
    res = (i / a) + (i % a);
  }
  cout << res;

  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
  return 0;
}
