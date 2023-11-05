#include <bits/stdc++.h>
#include <numeric>

using namespace std;


void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto& num : nums) {
    cin >> num;
  }

  unordered_map<int, int> dp;
  for (int i = 0; i != n; ++i) {
    if (dp.contains(nums[i] - 1)) {
      dp[nums[i]] = dp[nums[i] - 1] + 1; 
    } else {
      dp[nums[i]] = 0;
    }
  }
  int len = 0;
  int last_el = nums[0];
  for (auto [el, cur_len] : dp) {
    if (cur_len > len) {
      last_el = el;
      len = cur_len;
    }
  }
  cout << len + 1 << '\n';
  for (int cur_el = last_el - len, i = 0; cur_el <= last_el; ++i) {
    if (nums[i] == cur_el) {
      cout << i + 1 << ' ';
      ++cur_el;
    }
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
  //cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
