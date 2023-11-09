#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  vector<int> nums(n);
  unordered_map<int, int> fmap;
  for (int i = 0; i != n; ++i) {
    cin >> nums[i];  
    ++fmap[nums[i]];
  }

  int res = 0;
  for (int i = 0; i != n; ++i) {
    // count larger before n^2
    for (int j = 0; j < i; ++j) {
      if (nums[j] >= nums[i]) {
        ++res;
      }
    }
  }

  /*
  for (auto [num, freq] : fmap) {
    if (freq == 1) {
      continue;
    }
    res += freq*freq - (freq * (freq + 1)) / 2;
  }
  */

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
