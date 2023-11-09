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

  unordered_set<int> s;
  vector<int> res;
  for (int i = n - 1; i >= 0; --i) {
    if (!s.contains(nums[i])) {
      res.push_back(nums[i]);
      s.insert(nums[i]);
    }
  }

  cout << res.size() << '\n';
  for (auto i = rbegin(res); i != rend(res); ++i) {
    cout << *i << ' ';
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
