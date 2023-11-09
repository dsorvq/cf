#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;

  unordered_map<int, int> students;
  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;
    students[a] = i;
  }
  if (students.size() < k) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  int id = 0;
  for (auto i = students.begin(); id != k; ++i, ++id) {
    cout << i->second + 1 << ' '; 
  }
  cout << '\n';
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
