#include <bits/stdc++.h>

using namespace std;

int64_t alice(vector<int>& nums, int& l, int r, int64_t prev) {
  int64_t cur = 0;
  while (l <= r and cur <= prev) {
    cur += nums[l];
    ++l;
  }
  return cur;
}

int64_t bob(vector<int>& nums, int l, int& r, int64_t prev) {
  int64_t cur = 0;
  while (l <= r and cur <= prev) {
    cur += nums[r];
    --r;
  }
  return cur;
}

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto& num : nums) {
    cin >> num;
  }

  int l = 0, r = n - 1;
  int res = 0;
  int prev = 0;
  int64_t alice_sum = 0;
  int64_t bob_sum = 0;
  while (l <= r) {
    ++res;
    int cur = alice(nums, l, r, prev);
    alice_sum += cur;
    if (l <= r) {
      ++res;
      prev = bob(nums, l, r, cur);
      bob_sum += prev;
    }
  }
  cout << res << ' ' << alice_sum << ' ' << bob_sum << '\n';
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
