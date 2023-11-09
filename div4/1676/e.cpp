#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, q;
  cin >> n >> q;
  vector<int> candies(n);
  for (auto& candie : candies) {
    cin >> candie;
  }
  sort(begin(candies), end(candies), greater<int>());

  vector<int> prefix(n);
  partial_sum(begin(candies), end(candies), begin(prefix));

  for (int i = 0; i != q; ++i) {
    int target; 
    cin >> target;
    auto res = lower_bound(begin(prefix), end(prefix), target);
    if (res != end(prefix)) {
      cout << distance(begin(prefix), res) + 1 << '\n';
    } else {
      cout << -1 << '\n';
    }
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
