#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int ids_to_diag1(int i, int j) {
  return i + j; 
}

int ids_to_diag2(int i, int j, int offset) {
  return (offset - i) + j; 
}

void solve() {  
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(m));
  vector<int> diag1(m + n - 1);
  vector<int> diag2(m + n - 1);
  for (int i = 0; i != n; ++i) {
    for (int j = 0; j != m; ++j) {
      cin >> grid[i][j];
      diag1[ids_to_diag1(i, j)] += grid[i][j];
      diag2[ids_to_diag2(i, j, n - 1)] += grid[i][j];
    }
  }

  int res = 0;
  for (int i = 0; i != n; ++i) {
    for (int j = 0; j != m; ++j) {
      res = max(res, diag1[ids_to_diag1(i, j)] + diag2[ids_to_diag2(i, j, n - 1)] - grid[i][j]);
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
