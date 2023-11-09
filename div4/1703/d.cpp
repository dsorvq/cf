#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;

  vector<unordered_set<string>> ssvec(8);
  vector<string> strings(n); 
  for (int i = 0; i != n; ++i) {
    cin >> strings[i];
    ssvec[strings[i].size() - 1].insert(strings[i]);
  }

  string res(n, '0');
  for (int i = 0; i != n; ++i) {
    int bound = strings[i].size();
    for (int a = 1; a < bound; ++a) {
      int b = bound - a;
      
      auto s1 = strings[i].substr(0, a);
      if (ssvec[a - 1].contains(s1)) {
        auto s2 = strings[i].substr(a, b);
        if (ssvec[b - 1].contains(s2)) {
          res[i] = '1';
          break;
        }
      }
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
