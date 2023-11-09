#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int diff(string& s1, string& s2) {
  int res = 0;
  int m = s1.size();
  for (int i = 0; i != m; ++i) {
    res += abs((s1[i]) - (s2[i]));
  }
  return res;
}

void solve() {  
  int n, m;
  cin >> n >> m;
  vector<string> svec(n);
  for (auto& s : svec) {
    cin >> s; 
  }

  const int infty = numeric_limits<int>::max();
  int res = infty;
  for (int i = 0; i != n; ++i) {
    for (int j = 0; j != n; ++j) {
      if (i == j) {
        continue;
      }
      res = min(res, diff(svec[i], svec[j]));
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
