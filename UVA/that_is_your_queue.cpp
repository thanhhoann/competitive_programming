#include <iostream>
#include <queue>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;

int main() {
  int p, c;
  while (cin >> p >> c) {
    queue<int> q1, q2;
    int i = 1;
    for (int i = 1; i <= min(p, c); i++) {
      q1.push(i);
    }
    while (c--) {
      char x1;
      ll x2;
      cin >> x1;
      if (x1 == 'E') {
        cin >> x2;
        if (x2 != c) {
          q1.swap(q2);
          q1.push(x2);
          while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
          }
        } else {
          while (!q1.empty()) {
            ll temp = q1.front();
            q1.pop();
            if (temp == x2)
              continue;
            else
              q2.push(temp);
          }
        }
        q1.push(x2);
        while (!q2.empty()) {
          q1.push(q2.front());
          q2.pop();
        }
      } else {
        ll temp = q1.front();
        cout << temp << '\n';
        q1.pop();
        q1.push(temp);
      }
    }
  }
  return 0;
}
