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
  int num;
  vector<int> a, b, c;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num == 1)
      a.push_back(i + 1);
    if (num == 2)
      b.push_back(i + 1);
    if (num == 3)
      c.push_back(i + 1);
  }

  if (a.size() == 0 || b.size() == 0 || c.size() == 0) {
    cout << 0;
    return;
  }

  int min_num = min(a.size(), b.size());
  if (min_num > c.size()) {
    min_num = c.size();
  }
  cout << min_num << '\n';

  int i = 0;
  while (i < a.size() && i < b.size() && i < c.size()) {
    cout << a[i] << ' ' << b[i] << ' ' << c[i] << '\n';
    i++;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
