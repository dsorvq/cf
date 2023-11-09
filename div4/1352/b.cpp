#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n, k;
  cin >> n >> k;
  int np = n % 2, kp = k % 2;
  if (np == 1 and kp == 0) {
    cout << "NO\n";
  } else if (np == kp) {
    int q = k - 1;
    if (q >= n) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      for (int i = 0; i < q; ++i) {
        cout << 1 << ' ';
      }
      cout << n - q << '\n';
    }
  } else {
    int q = (k - 1);
    if (q >= n / 2) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      for (int i = 0; i < q; ++i) {
        cout << 2 << ' ';
      }
      cout << n - q*2 << '\n';
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
