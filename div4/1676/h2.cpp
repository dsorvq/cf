#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int64_t merge(vector<int>& nums, int l, int mid, int r) {
  int n = r - l + 1;
  vector<int> tmp(n);

  int64_t res = 0;
  int li = l, ri = mid + 1, ti = 0;
  while (li <= mid and ri <= r) {
    if (nums[li] <= nums[ri]) {
      tmp[ti++] = nums[li++];
    } else {
      res += mid + 1 - li;
      tmp[ti++] = nums[ri++];
    }
  }
  while (li <= mid) {
    tmp[ti++] = nums[li++];
  }
  while (ri <= r) {
    tmp[ti++] = nums[ri++];
  }
  
  for (ti = 0; ti < n; ++ti) {
    nums[ti + l] = tmp[ti];
  }

  return res;
}

int64_t merge_sort(vector<int>& nums, int l, int r) {
  if (l == r) {
    return 0;
  }
  
  int64_t res = 0;
  int mid = (r - l) / 2 + l;
  res += merge_sort(nums, l, mid);
  res += merge_sort(nums, mid + 1, r);
  res += merge(nums, l, mid, r); 

  return res;
}

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  unordered_map<int, int64_t> fmap;
  for (int i = 0; i != n; ++i) {
    cin >> nums[i];  
    ++fmap[nums[i]];
  }

  int64_t res = merge_sort(nums, 0, nums.size() - 1);

  for (auto [num, freq] : fmap) {
    if (freq == 1) {
      continue;
    }
    res += freq*freq - (freq * (freq + 1)) / 2;
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
