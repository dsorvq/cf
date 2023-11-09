#include <bits/stdc++.h>
#include <numeric>

using namespace std;

const char stone = '*';
const char wall = '.';
const char obsticle = 'o';

void fill(vector<vector<char>>& grid, int i, int j, int stones) {
  while (i >= 0 and grid[i][j] != obsticle) {
    if (stones) {
      grid[i][j] = stone;
      --stones;
    } else {
      grid[i][j] = wall;
    }
    --i;
  }
}

void solve() {  
  int n, m;
  cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m));
  for (int i = 0; i != n; ++i) {
    for (int j = 0; j != m; ++j) {
      cin >> grid[i][j];
    }
  }

  for (int j = 0; j < m; ++j) {
    int stones = 0;
    for (int i = 0; i < n; ++i) {
      if (grid[i][j] == stone) {
        ++stones;
      } else if (grid[i][j] == obsticle and stones) {
        fill(grid, i - 1, j, stones);
        stones = 0;
      } 
      if (i == n - 1 and stones) {
        fill(grid, i, j, stones);
      }
    }
  }

  for (auto& row : grid) {
    for (auto cell : row) {
      cout << cell;
    }
    cout << '\n';
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
