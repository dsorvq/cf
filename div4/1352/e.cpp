#include <bits/stdc++.h>

using namespace std;

bool find(vector<int>& nums, int target) {
  int n = nums.size();
  int sum = 0;
  int l = 0, r = 0;
  bool found = false;
  for (; r < n; ++r) {
    sum += nums[r];
    while (sum > target) {
      sum -= nums[l];
      ++l;
    }
    if (sum == target and r - l >= 1) {
      found = true;
      break;
    }
  }
  return found;
}

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto& num : nums) {
    cin >> num;
  }

  int res = 0;
  for (auto& num : nums) {
    if (find(nums, num)) {
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
