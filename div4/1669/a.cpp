#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  if (n >= 1900) {
    cout << "Division 1\n";
  } else if (n >= 1600) {
    cout << "Division 2\n";
  } else if (n >= 1400) {
    cout << "Division 3\n";
  } else {
    cout << "Division 4\n";
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
