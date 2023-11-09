#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;
  vector<int> bits(31);
  for (int i = 0; i != n; ++i) {
    unsigned a;
    cin >> a;
    for (int j = 0; j < 31 and a; ++j) {
      if (a % 2) {
        ++bits[j];
      }
      a /= 2;
    }
  }

  unsigned res = 0;
  for (int i = 30; i >= 0; --i) {
    if (bits[i] >= n) {
      res |= (1 << i);
    } else if (bits[i] + k >= n) {
      k -= (n - bits[i]);
      res |= (1 << i);
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
