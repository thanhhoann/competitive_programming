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

  int temp = 2;
  bool flag = false;

  if (n <= temp) {
    flag = true;
  }

  while (temp < n) {
    temp += 2;
    if ((n - temp) % 2 != 0) {
      flag = true;
    }
  }

  if (flag == true) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}

int main() {
  solve();
  return 0;
}
