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
  int N[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> N[i];
    if (N[i] > k) {
      cout << "Difficult Loss";
      return;
    }
  }
  cout << "Easy Win!";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
