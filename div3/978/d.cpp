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
  if (n <= 2) {
    cout << "0\n";
    return;
  }

  pair<int, int> comb[3] = {{-1, 1}, {0, 0}, {1, 1}};

  int infty = numeric_limits<int>::max();
  int res = infty;
  for (auto c1 : comb) {
    for (auto c2 : comb) {
      int d = (nums[1] + c2.first) - (nums[0] + c1.first);
      
      int cur_res = c1.second + c2.second;

      int prev = nums[1] + c2.first;
      for (int i = 2; i < n; ++i) {
        int change = d - (nums[i] - prev);
        if (abs(change) > 1) {
          cur_res = -1;
          break;
        }
        prev = nums[i] + change;
        cur_res += abs(change);
      }

      if (cur_res != -1) {
        res = min(res, cur_res);
      }
    }
  }
 
  cout << (res == infty ? -1 : res) << '\n';
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
