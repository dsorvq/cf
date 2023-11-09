#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;

  vector<pair<int, bool>> nums(n + 1, {0, false});
  vector<int> psum(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> nums[i].first;
    if (nums[i].first < i) {
      nums[i].second = true;
      psum[i] = psum[i - 1] + 1;
    } else {
      nums[i].second = false;
      psum[i] = psum[i - 1];
    }
  }

  int64_t res = 0;
  for (int i = 1; i <= n; ++i) {
    if (!nums[i].second) {
      continue; 
    }
    if (nums[i].first) 
      res += psum[nums[i].first - 1];
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
