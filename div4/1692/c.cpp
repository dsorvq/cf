#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  vector<string> grid(8);
  for (int i = 0; i != 8; ++i) {
    cin >> grid[i]; 
  }
  
  for (int i = 1; i < 7; ++i) {
    for (int j = 1; j < 7; ++j) {
      if (grid[i - 1][j - 1] == '#' and grid[i - 1][j + 1] == '#' and grid[i + 1][j - 1] == '#' and grid[i + 1][j + 1] == '#') {
        cout << i + 1 << ' ' << j + 1 << '\n';
        break;
      }
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
