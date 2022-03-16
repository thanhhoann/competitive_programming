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

  vector<int> evens, odds;
  int sum_even = 0, sum_odd = 0;

  int temp = (n / 2) - 1;
  int count = 0;
  int last_odd = 0;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      evens.push_back(i);
      sum_even += i;
    } else if (count < temp) {
      odds.push_back(i);
      sum_odd += i;
      last_odd = i;
      count++;
    }
  }

  int diff = sum_even - sum_odd;
  int t = last_odd;

  if (diff % 2 == 0) {
    cout << "NO";
  } else {
    odds.push_back(diff);
    cout << "YES\n";
    for (auto num : evens)
      cout << num << ' ';
    for (auto num : odds)
      cout << num << ' ';
  }

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
