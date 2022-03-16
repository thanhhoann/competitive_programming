
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <stack>
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

template <typename T> void traverse_stack(stack<T> &st) {
  if (st.empty())
    return;
  T x = st.top();
  cout << x << " ";
  st.pop();
  traverse_stack(st);
  st.push(x);
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    stack<char> temp;
    stack<char> compound;

    for (auto c : s) {
      int num = c - '0';
      if ((9 - num >= 2 && num > 0) || c == '(' || c == ')') {
      } else {
      }
      temp.push(c);
      traverse_stack(temp);
    }
    cout << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  return 0;
}
