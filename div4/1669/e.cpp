#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;

  unordered_map<char, unordered_map<char, int>> begins;
  unordered_map<char, unordered_map<char, int>> ends;

  int64_t res = 0;
  for (int i = 0; i != n; ++i) {
    string str;
    cin >> str;

    char b = str[0];
    char e = str[1];
    auto bmap = begins.find(b);
    if (bmap != end(begins)) {
      for (auto [key, value] : bmap->second) {
        if (key != e) {
          res += value;
        }
      }
    }
    auto emap = ends.find(e);
    if (emap != end(ends)) {
      for (auto [key, value] : emap->second) {
        if (key != b) {
          res += value;
        }
      }
    }

    ++begins[str[0]][str[1]];
    ++ends[str[1]][str[0]];
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
