#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void check(vector<string>& grid, int& a, int& b, int i, int j) {
  if (grid[i][j] == '1') {
    ++a;
  } else {
    ++b;
  }
}

void solve() {  
  int n;
  cin >> n;
  vector<string> grid(n);
  for (int i = 0; i != n; ++i) {
    cin >> grid[i];
  }

  int res = 0;
  int bound = (n + 1) / 2;
  for (int i = 0; i < bound; ++i) {
    int boundj = bound;
    if (n % 2) {
      boundj--;
    }
    for (int j = 0; j < boundj; ++j) {
      int a = 0, b = 0;
      check(grid, a, b, i, j);
      check(grid, a, b, j, n - i - 1);
      check(grid, a, b, n - i - 1, n - j - 1);
      check(grid, a, b, n - j - 1, i);
      //cout << "+ " << min(a, b) << " at " << i << ' ' << j << '\n';
      res += min(a, b);
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
