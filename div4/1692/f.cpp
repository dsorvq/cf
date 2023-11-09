#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  array<int, 10> mod10{};
  for (int i = 0; i != n; ++i) {
    int a;
    cin >> a;
    ++mod10[a%10];
  }


  for (int i = 0; i != 10; ++i) {
    for (int j = 0; j != 10; ++j) {
      int k;
      int ij = (i + j) % 10;
      if (ij > 3)
        k = 13 - (ij);
      else 
        k = 3 - (ij);

      if (mod10[i] == 0 or mod10[j] == 0 or mod10[k] == 0) {
        continue;
      }
      else if (i == j and j == k) {
        if (mod10[i] < 3) {
          continue;
        } 
      } else if (i == j or i == k) {
        if (mod10[i] < 2) {
          continue;
        }
      } else if (j == k) {
        if (mod10[j] < 2) {
          continue;
        }
      }
      cout << "YES\n"; 
      return;
    }
  }

  cout << "NO\n";
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
