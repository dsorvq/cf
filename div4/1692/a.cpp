#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  vector<int> v(4);
  for (int i = 0; i != 4; ++i) {
    cin >> v[i]; 
  }
  int res = 0;
  for (int i = 1; i != 4; ++i) {
    if (v[i] > v[0]) {
      ++res;
    }
  }
  cout << res << '\n';
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
