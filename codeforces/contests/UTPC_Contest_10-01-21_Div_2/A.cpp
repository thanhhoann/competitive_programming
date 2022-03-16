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
  char s;
  cin >> s;

  if (s == 'a')
    for (int i = 1; i <= n; i++)
      cout << i << ' ';
  else
    for (int i = n; i > 0; i--)
      cout << i << ' ';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
