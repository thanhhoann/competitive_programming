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
  int n, k;
  cin >> n >> k;
  int num;

  int count = 0;
  int team = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if ((5 - num) >= k) {
      count++;
    }
  }

  cout << count / 3;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
