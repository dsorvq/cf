#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  vector<string> svec(n);
  for (auto& str : svec) {
    cin >> str;
  }
  sort(begin(svec), end(svec), [](const string& a, const string& b) {
      return a.size() < b.size();
    }
  );
  for (int i = 1; i < n; ++i) {
    if (svec[i].find(svec[i - 1]) == string::npos) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
  for (auto& str : svec) {
    cout << str << '\n';
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
  //cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
