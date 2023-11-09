#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i != n; ++i) {
    cin >> nums[i];
  }
  
  int64_t prefix = 0, suffix = 0;
  int res = 0;
  for (int l = 0, r = n - 1; l <= r; ++l) {
    prefix += nums[l];
    while (prefix > suffix and l < r) {
      suffix += nums[r];
      --r;
    }
    if (prefix == suffix) {
      res = max(res, l + (n - r));
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
