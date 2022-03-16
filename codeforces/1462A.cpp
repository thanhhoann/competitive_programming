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
  int n;
  cin >> n;
  vector<int> N(n);
  for (auto &num : N)
    cin >> num;

  int l = 0, r = n - 1;
  vector<int> res;
  while (l < r) {
    res.push_back(N[l]);
    res.push_back(N[r]);
    l++;
    r--;
  }

  for (auto num : res)
    cout << num << ' ';

  if (n % 2 != 0 || n == 1)
    cout << N[l];

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
