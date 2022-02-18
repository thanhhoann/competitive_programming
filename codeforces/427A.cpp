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
  int polices = 0, crimes = 0;

  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num < 0) {
      if (polices <= 0) {
        crimes++;
      } else
        polices--;
    } else {
      polices += num;
    }
  }

  cout << crimes;
}

int main() {
  solve();
  return 0;
}
