#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;
  vector<int> nums(n);
  for (auto& num : nums) {
    cin >> num;
  }
  vector<bool> is_begin(n, false);
  for (int i = 0; i < n - 1; ++i) {
    if (nums[i] < nums[i + 1] * 2) {
      is_begin[i] = true;
    }
  }

  int res = 0;
  int cur = 0;
  for (int i = 0; i < n; ++i) {
    if (is_begin[i]) {
      ++cur;
    } else {
      if (cur >= k)
        res += cur - k + 1;
      cur = 0;
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
