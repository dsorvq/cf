#include <bits/stdc++.h>

using namespace std;

void solve() {  
  int n;
  cin >> n;
  if (n == 1) {
    cout << "1\n";
    return;
  }
  if (n <= 3) {
    cout << "-1\n";
    return;
  }

  int cycles = n / 4;
  vector<int> res;
  res.reserve(n);
  for (int i = 0; i != cycles; ++i) {
    int offest = 4 * i;
    res.push_back(offest + 2); 
    res.push_back(offest + 4); 
    res.push_back(offest + 1); 
    res.push_back(offest + 3); 
  }
  if (n % 4 == 1) {
    res.push_back(cycles*4 + 1); 
  } else if (n % 4 == 2) {
    auto prev = res.back();
    res.back() = cycles*4 + 1;
    res.push_back(prev);
    res.push_back(cycles*4 + 2);
  } else if (n % 4 == 3) {
    auto prev = res.back();
    res.back() = cycles*4 + 1;
    res.push_back(cycles*4 + 3);
    res.push_back(prev);
    res.push_back(cycles*4 + 2);
  }

  for (auto num : res) {
    cout << num << ' ';
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
