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

  int count = 0;
  int temp = 5;

  while (n > 0) {
    if (n >= temp) {
      count++;
      n -= temp;
    } else {
      temp--;
    }
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
