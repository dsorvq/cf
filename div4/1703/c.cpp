#include <bits/stdc++.h>
#include <numeric>

using namespace std;

auto dec(int& a) {
  a = (a + 9) % 10;
}
auto inc(int& a) {
  a = (a + 1) % 10;
}

void solve() {  
  int n;
  cin >> n;
  
  vector<int> lock(n);
  for (int i = 0; i != n; ++i) {
    cin >> lock[i];
  }

  for (int i = 0; i != n; ++i) {
    int nn;
    cin >> nn;
    string patter;
    cin >> patter;

    for (auto p : patter) {
      if (p == 'D') {
        inc(lock[i]);
      } else {
        dec(lock[i]);
      }
    }
  }
  
  for (auto l : lock) {
    cout << l << ' ';
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
  cin >> t;
  while (t--) {
      solve();
  }

  return 0;
}
