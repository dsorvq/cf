#include <bits/stdc++.h>
#include <numeric>

using namespace std;

bool is_same_par(vector<int>& nums, int i) {
  int n = nums.size();
  int par = nums[i] % 2;
  for (; i < n; i += 2) {
    if (nums[i] % 2 != par) {
      return false;
    }
  }
  return true;
}

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto& num : nums) {
    cin >> num;
  }

  if (is_same_par(nums, 0) and is_same_par(nums, 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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
