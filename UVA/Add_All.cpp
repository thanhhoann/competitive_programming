#include <functional>
#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    priority_queue<int, vector<int>, greater<int>> q;
    while (n--) {
      int x;
      cin >> x;
      q.push(x);
    }
    int num = 0, ans = 0;
    while (q.size() - 1 > 0) {
      num = q.top();
      q.pop();
      num = num + q.top();
      q.pop();
      ans += num;
      q.push(num);
    }
    cout << ans << '\n';
  }
  return 0;
}
