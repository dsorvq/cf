#include <bits/stdc++.h>
#include <numeric>

using namespace std;

pair<int, int> operator+(const pair<int, int>& a, const pair<int, int>& b) {
  return {a.first + b.first, a.second + b.second}; 
}

pair<int, int> dfs(vector<vector<int>>& adj, string& colors, int node, int& res) {
  pair<int, int> cur {};
  for (auto child : adj[node]) {
    cur = cur + dfs(adj, colors, child, res); 
  }
  if (colors[node - 1] == 'B') {
    ++cur.second;
  } else {
    ++cur.first;
  }
  if (cur.first == cur.second) {
    ++res;
  }

  return cur;
}

void solve() {  
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1);
  for (int i = 2; i <= n; ++i) {
    int a;
    cin >> a;
    adj[a].push_back(i);
  }

  string colors;
  cin >> colors;

  int res = 0;
  dfs(adj, colors, 1, res);
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
