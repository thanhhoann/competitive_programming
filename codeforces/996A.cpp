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

  int index = 0;
  int dollars[] = {100, 20, 10, 5, 1};
  int count = 0;

  while (n > 0 && index < 5) {
    if (n >= dollars[index]) {
      n -= dollars[index];
      count++;
    } else {
      index++;
    }
  }

  cout << count;
}

int main() {
  solve();
  return 0;
}
