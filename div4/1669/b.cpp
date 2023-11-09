#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;

  unordered_map<int, int> fmap;
  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;    
    ++fmap[a];
  }
  int res = -1;
  for (auto [el, freq] : fmap) {
    if (freq >= 3) {
      res = el;
      break;
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
