#include <bits/stdc++.h>
#include <numeric>

using namespace std;

bool is_good_paint(string& str, int& id) {
  bool R = false;
  bool B = false;
  while (id < str.size()) {
    if (str[id] == 'B') {
      B = true;
    } else if (str[id] == 'R') {
      R = true;
    } else if (str[id] == 'W') {
      break;
    }
    ++id;
  }

  return B and R;
}

void solve() {  
  int n;
  cin >> n;
  string str;
  cin >> str;

  int id = 0;
  bool flag = true;
  while ((id = str.find_first_of("RB", id)) != string::npos) {
    if (!is_good_paint(str, id)) {
      flag = false;
      break;
    }
  }

  if (flag) {
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
