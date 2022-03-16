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
  string s;
  cin >> n >> s;

  int count = 97;
  while (count < 123) {
    bool isFound = false;

    for (auto c : s) {
      char ch = tolower(c);
      int num = ch;
      if (num == count) {
        count++;
        isFound = true;
      }
    }

    if (isFound == false) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
}

int main() {
  solve();
  return 0;
}
