#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int t;
  while (cin >> t, t) {
    priority_queue<int, vector<int>, greater<int>> q;
    while (t--) {
      int num;
      cin >> num;
      q.push(num);
    }
    int temp = 0;
    int count = 0;
    int res = 0;
    while (q.size() > 0) {
      temp += q.top();
      q.pop();
      if (count > 0)
        res += temp;
      count++;
    }

    cout << res << '\n';
  }
}

int main() {
  solve();
  return 0;
}
