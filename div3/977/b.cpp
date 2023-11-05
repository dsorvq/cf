#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  string str;
  cin >> n >> str;

  unordered_map<string, int> fmap;

  for (int i = 1; i < n; ++i) {
    string t {str[i-1], str[i]};
    ++fmap[t];
  }

  auto me = max_element(begin(fmap), end(fmap), 
    [] (const pair<string, int>& p1, const pair<string, int> & p2) {
        return p1.second < p2.second;
    }
  );
  cout << me->first << '\n';
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
