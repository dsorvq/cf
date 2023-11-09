#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, s;
  cin >> n >> s;
  vector<int> nums(n);
  for (int i = 0; i != n; ++i) {
    cin >> nums[i];
  }
  vector<int> psl(n);
  vector<int> psr(n);
  partial_sum(begin(nums), end(nums), begin(psl));
  partial_sum(rbegin(nums), rend(nums), rbegin(psr));

  if (s > psl.back()) {
    cout << "-1\n";
    return;
  } 
  
  int target = psl.back() - s;

  int infty = numeric_limits<int>::max();
  int res = infty;
  for (int a = 0; a <= target; ++a) {
    int b = target - a;
    int d1 = 0, d2 = 0;
    if (a)
      d1 = distance(begin(psl), lower_bound(begin(psl), end(psl), a)) + 1;
    if (b)
      d2 = distance(rbegin(psr), lower_bound(rbegin(psr), rend(psr), b)) + 1;
    res = min(res, d1 + d2);
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
