#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, w;
  cin >> n >> w;
  int change = 0;
  int low = 0, high = 0;

  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;
    change += a;
    high = max(high, change); 
    low = min(low, change);
  }
  w -= high;
  low = abs(min(0, low));
  cout << max(0, w - low + 1) << '\n';
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  /*
  freopen("f.in", "r", stdin);
	freopen("f.out", "w", stdout);
  */

  int t = 1;
  //cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
