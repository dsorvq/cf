#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, q;
  cin >> n >> q;

  vector<int64_t> psum(n + 1);
  for (int i = 1; i <= n; ++i) {
    int64_t a;
    cin >> a; 
    psum[i] = psum[i - 1] + a;
  }

  for (int i = 0; i != q; ++i) {
    int64_t p;
    cin >> p;
    int id = distance(begin(psum), upper_bound(begin(psum), end(psum), p - 1));
    cout << id << ' ';
    cout << p - psum[id - 1] << '\n';
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
