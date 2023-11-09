#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;
  int gamma = n - 1;
  int alpha = (k - 1) / gamma;
  cout << alpha*n + (k - alpha*gamma) << '\n';
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
