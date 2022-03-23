#include <iostream>
#include <vector>

using namespace std;

template <class T> void _db(vector<T> nums) {
  cerr << "[ ";
  for (T num : nums)
    cerr << num << ' ';
  cerr << " ]";
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;

    vector<int> N(n), v1, v2;
    for (auto &num : N)
      cin >> num;

    int count = 0;
    int x1 = 0, x2 = 0;
    for (int i = 0; i < n; i++) {
      int a = N[i] % 2;
      int b = i % 2;
      if (a != b) {
        if (i % 2 == 0)
          x1++;
        else
          x2++;
      }
    }
    if (x1 != x2)
      cout << -1;
    else
      cout << x1;
    cout << '\n';
  }
  return 0;
}
