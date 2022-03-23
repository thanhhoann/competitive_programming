#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> N(n);
  for (auto &num : N)
    cin >> num;

  ll sum = 0, j = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    sum += N[i];
    if (sum > t) {
      sum -= N[j];
      j++;
    }
    ans = max(ans, i - j + 1);
  }
  cout << ans;

  return 0;
}
