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
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num == 1) {
      cout << "HARD";
      return;
    }
  }
  cout << "EASY";
}

int main() {
  solve();
  return 0;
}
