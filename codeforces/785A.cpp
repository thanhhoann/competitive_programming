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
  string s;
  int sum = 0;
  while (n--) {
    cin >> s;
    if (s == "Tetrahedron")
      sum += 4;
    if (s == "Cube")
      sum += 6;
    if (s == "Octahedron")
      sum += 8;
    if (s == "Dodecahedron")
      sum += 12;
    if (s == "Icosahedron")
      sum += 20;
  }

  cout << sum;
}

int main() {
  solve();
  return 0;
}
