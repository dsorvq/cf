#include <bits/stdc++.h>
#include <numeric>

using namespace std;

auto bfs(unordered_map<int64_t, int>& nums, int n, int64_t start_num) -> bool {
  nums[start_num] = 1;
  queue<int64_t> q;
  q.push(start_num);
  while (!q.empty()) {
    auto cur = q.front();
    q.pop();

    int64_t r = cur * 2, l = 0;
    if (cur % 3 == 0) {
      l = cur / 3;
    }
    if (nums.contains(r) and !nums[r]) {
      nums[r] = nums[cur] + 1;
      if (nums[r] == n) {
        return true;
      }
      q.push(r);
    }
    if (nums.contains(l) and !nums[l]) {
      nums[l] = nums[cur] + 1;
      if (nums[l] == n) {
        return true;
      }
      q.push(l);
    }
  }

  return false;
}

void solve() {  
  int n;
  cin >> n;
  unordered_map<int64_t, int> nums;
  for (int i = 0; i != n; ++i) {
    int64_t a;
    cin >> a;
    nums[a] = 0;
  }

  for (auto& [num, dist] : nums) {
    if (bfs(nums, n, num)) {
      auto cn = 1;
      auto c = num;
      cout << c << ' ';
      while (cn < n) {
        int64_t r = c * 2, l = 0;
        if (c % 3 == 0) {
          l = c / 3;
        }
        if (nums.contains(r) and nums[r] == cn + 1) {
          c = r;
        } else {
          c = l;
        }
        cout << c << ' ';
        ++cn;
      }
      break; 
    } else {
      for (auto& [k, v] : nums) {
        v = 0;
      }
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
