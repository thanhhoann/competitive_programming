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
  string s;
  char c;
  cin >> s >> c;

  for (int i = 0; i < s.length(); i += 2) {
    if (s[i] == c) {
      cout << "YES" << '\n';
      return;
    }
  }
  cout << "NO";

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
