#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int N[5][5];
  char inp;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> inp;
      if (inp == '#')
        N[i][j] = 1;
      else if (inp == '.')
        N[i][j] = 0;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if ((i + 1) < 4 && (j + 1) < 4) {
        int a = N[i][j];
        int b = N[i][j + 1];
        int c = N[i + 1][j];
        int d = N[i + 1][j + 1];
        int sum = a + b + c + d;
        if (sum >= 3 || sum <= 1) {
          cout << "YES";
          return;
        }
      }
    }
  }

  cout << "NO";
}

int main() {
  solve();
  return 0;
}
