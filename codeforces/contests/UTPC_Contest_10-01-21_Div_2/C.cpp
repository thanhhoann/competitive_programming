#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define ll long long
#define db(x) cout << #x << " = " << x << endl;
template <class T> void _db(vector<T> nums) {
  cerr << "[ ";
  for (T num : nums)
    cerr << num << ' ';
  cerr << " ]";
}

int S_O_E(int n) {
  vector<bool> primes(n, true);

  for (int i = 2; i <= sqrt(n); i++) {
    if (primes[i]) {
      for (int j = i * i; j <= n; j += i) {
        primes[j] = false;
      }
    }
  }
     

  int count = 0;
  for (int i = 2; i <= n; i++) {
    if (primes[i] == true && n % i == 0) {
      count++;
    }
  }

  return count;
}

void solve() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 2; i <= n; i++) {
    int temp = S_O_E(i);
    if (temp == 2) {
      count++;
    }
  }
  cout << count;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
