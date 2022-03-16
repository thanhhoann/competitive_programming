#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  cin >> n;

  int a, b, c, d;
  string temp;
  for (int i = 0; i < 2; i++) {
    cin >> a;
    int num;
    for (int j = 0; j < a; j++) {
      cin >> num;
      temp += to_string(num);
    }
  }

  int count = 1;
  while (count <= n) {
    string num = to_string(count);
    if (temp.find(num) != -1) {
      count++;
      if (count == (n + 1)) {
        cout << "I become the guy.";
        return;
      }
    } else {
      cout << "Oh, my keyboard!";
      return;
    }
  }
}

int main() {
  solve();
  return 0;
}
