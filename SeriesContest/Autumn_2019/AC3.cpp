#include <functional>
#include <iostream>
#include <queue>
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

  vector<int> A, B;
  while (n--) {
    int a, b;
    cin >> a >> b;
    A.push_back(a);
    B.push_back(b);
  }

  for (int i = 0; i < n; i++) {
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
