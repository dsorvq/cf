#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  vector<int> res;
  int tens = 1;
  while (n) {
    int a;
    a = n % 10 * tens;
    if (a) {
      res.push_back(a);
    }
    n /= 10;
    tens *= 10;
  }
  cout << res.size() << '\n';
  for (auto a : res) {
    cout << a << ' ';
  }
  cout << '\n';
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  /*
  freopen("f.in", "r", stdin);
	freopen("f.out", "w", stdout);
  */

  int t = 1;
  cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
