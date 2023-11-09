#include <bits/stdc++.h>

using namespace std;

void solve() {  
  int a, b, c;
  cin >> a >> b >> c;

  string res;
  if (a) {
    res.push_back('0');
  }
  for (int i = 0; i != a; ++i) {
    res.push_back('0');
  }
  if (c) {
    res.push_back('1'); 
  }
  for (int i = 0; i < c; ++i) {
    res.push_back('1');   
  }
  char ch = '0';
  if (!c) {
    ch = '1'; 
    ++b;
  }
  if (a and b) {
    --b;
  }
  for (int i = 0; i < b; ++i) {
    res.push_back(ch);
    ch = (ch == '0' ? '1' : '0');
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
