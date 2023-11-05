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
  sort(begin(nums), end(nums));

  if (k == 0) {
    if (nums[0] == 1) {
      cout << "-1\n";
    } else {
      cout << nums[0] - 1 << '\n';
    }
  }
  else if (k == n or nums[k] != nums[k - 1]) {
    cout << nums[k - 1] << '\n';
  } else {
    cout << "-1\n";
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
  //cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
