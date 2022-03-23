#include <iostream>
#include <map>
#define ll long long

using namespace std;

map<ll, ll> m;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    m.clear();
    m[n]++;

    ll ls = -1, rs = -1;
    while (k > 0) {
      auto it = prev(m.end());
      ll size = it->first, count = it->second;
      m.erase(it);

      ls = (size - 1) / 2;
      rs = size / 2;
      m[ls] += count;
      m[rs] += count;
      k -= count;
    }
    printf("Case #%d: %lld %lld\n", tc, max(ls, rs), min(ls, rs));
  }
  return 0;
}
