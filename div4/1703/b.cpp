#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  string str;
  cin >> str;

  vector<int> arr(26, 1);

  int res = 0;
  for (auto c : str) {
    ++res;
    if (arr[c - 'A'] == 1) {
      arr[c - 'A'] = 0;
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
