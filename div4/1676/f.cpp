#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;
  map<int, int> fmap;
  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;
    ++fmap[a];
  }

  vector<int> nums;
  for (auto [num, freq] : fmap) {
    if (freq >= k) {
      nums.push_back(num);
    }
  }
  
  if (nums.empty()) {
    cout << "-1\n";
    return;
  }

  int L = nums[0], R = nums[0];
  for (int l = 0, r = 1; r < nums.size(); ++r) {
    if (nums[r] == nums[r - 1] + 1) {
      if (nums[r] - nums[l] > R - L) {
        L = nums[l];
        R = nums[r];
      }
    } else {
      l = r;
    }
  }
  cout << L << ' ' << R << '\n';
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
