#include <bits/stdc++.h>
#include <numeric>

using namespace std;

bool dfs(vector<vector<int>>& adj, int start_v, vector<int>& parent) {
  stack<int> st;
  st.push(start_v);
  parent[start_v] = numeric_limits<int>::max();

  bool is_cycle = false;
  bool is_two_neighbors = (adj[start_v].size() == 2);

  while (!st.empty()) {
    auto cur = st.top();
    st.pop();
    if (adj[cur].size() != 2) {
      is_two_neighbors = false;
    }

    for (auto child : adj[cur]) {
      if (parent[child] and parent[child] != cur) {
        is_cycle = true;
      } else if (!parent[child]){
        st.push(child);
        parent[child] = cur;
      }
    }
  }

  return is_cycle and is_two_neighbors;
}

void solve() {  
  int v, e;
  cin >> v >> e;

  vector<vector<int>> adj(v + 1);
  for (int i = 0; i != e; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int res = 0;
  vector<int> parent(v + 1);
  for (int node = 1; node <= v; ++node) {
    if (parent[node]) {
      continue;
    } 
    if (dfs(adj, node, parent)) {
      ++res;
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
  //cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
