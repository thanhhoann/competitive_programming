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
  int n, m;
  cin >> n >> m;

  char ch;
  vector<char> A;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> ch;
      if (ch == 'C' || ch == 'M' || ch == 'Y') {
        cout << "#Color";
        return;
      }
    }
  }
  cout << "#Black&White";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
