#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  unordered_map<int, int> fmap;
  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;
    ++fmap[a];
  }
 
  int res = 0;
  bool is_deleted = false;
  for (auto [value, freq] : fmap) {
    if (freq == 1) {
      ++res;
      continue;
    }

    if (freq % 2 == 0) {
      if (is_deleted) {
        res += 2;
        is_deleted = false;
      } else {
        is_deleted = true;
      }
    } else {
      ++res;
    }
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
