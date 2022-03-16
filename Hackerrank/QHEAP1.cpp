#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define ll long long

priority_queue<ll, vector<ll>, greater<ll>> q_1;
priority_queue<ll, vector<ll>, greater<ll>> q_2;

int main() {
  int n;
  cin >> n;
  while (n--) {
    ll a;
    cin >> a;
    if (a == 1 || a == 2) {
      ll b;
      cin >> b;
      if (a == 1)
        q_1.push(b);
      else
        q_2.push(b);
    } else {
      while (q_2.size() != 0 && q_1.top() == q_2.top()) {
        q_1.pop();
        q_2.pop();
      }
      cout << q_1.top() << '\n';
    }
  }
  return 0;
}
