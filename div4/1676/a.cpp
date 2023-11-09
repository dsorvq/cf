#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  string str;
  cin >> str;
  if (str[0] + str[1] + str[2] == str[3] + str[4] + str[5]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
