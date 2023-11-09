#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  vector<int> cand(n);
  int min_c = numeric_limits<int>::max();
  for (auto& c : cand) {
    cin >> c;
    min_c = min(c, min_c);
  }
  int res = 0;
  for (auto c : cand) {
    res += abs(c - min_c);
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
