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
  int num;

  int count = 0;

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
      cin >> num;
      sum += num;
    }
    if (sum >= 2)
      count++;
  }

  cout << count;
}

int main() {
  solve();
  return 0;
}
