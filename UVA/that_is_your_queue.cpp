#include <iostream>
#include <queue>

using namespace std;

#define ll long long

int main() {
  int p, c;
  while (cin >> p >> c) {
    queue<int> q;
    while (c--) {
      char a, b;
      int i = 1;
      cin >> a;
      if (a == 'E') {
        cin >> b;
      } else {
        q.push(i);
        i++;
      }
    }
  }
}
