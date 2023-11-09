#include <bits/stdc++.h>
#include <numeric>

using namespace std;

std::string str_tolower(std::string s)
{
    std::transform(s.begin(), s.end(), s.begin(), 
                   [](unsigned char c){ return std::tolower(c); } // correct
                  );
    return s;
}

void solve() {  
  string str;
  cin >> str;
  auto lstr = str_tolower(str);
  if (lstr == "yes") {
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
