#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int to1(pair<int, int> hhmm) {
  return hhmm.first * 60 + hhmm.second; 
}
pair<int, int> to2(int hhmm) {
  return {hhmm / 60, hhmm % 60};  
}

// yeah
bool is_palindrom(int mm) {
  string p;
  auto hhmm = to2(mm);
  if (hhmm.first < 10) {
    p += '0';
  }
  p += to_string(hhmm.first);
  if (hhmm.second < 10) {
    p += '0';
  }
  p += to_string(hhmm.second);

  return p[0] == p[3] and p[1] == p[2];
}

void solve() {  
  int hh, mm, x;
  char ch;
  cin >> hh >> ch >> mm >> x;

  int bound = to1({hh, mm});
  auto cur = bound;
  int res = 0;
  const int mod = 60 * 24;

  do {
    if (is_palindrom(cur)) {
      ++res;
    }
    cur += x;
    cur %= mod;
  } while (cur != bound);

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
