#include <bits/stdc++.h>
#include <numeric>

using namespace std;
 
// do not blow my hashes :|
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();

    return splitmix64(x + FIXED_RANDOM);
  }
};

void solve() {  
  //           + + + + +  
  // 4 4 3 4 4 3 3 3 3 3
  // + + - + + - - - 
  // 1 2 1 2 3 2 1 0
  //
  //                 
  // [4]-> 1 2 4 5 |= 1 5 
  //
  // 1 2 3 4 5 6 7 8 9 10
  // 8 8 8 9 9 6 6 9 6 6
  // [8] -> 1 2 3 |= 1 3 : 3
  // [6] -> 6 7 9 10 |= 1 10 : 3
  // [9] -> 4 5 8 |= |= 4 5 : 2

  int n;
  cin >> n;
  unordered_map<int, vector<int>, custom_hash> idmap;
  int num;
  for (int i = 1; i <= n; ++i) {
    cin >> num;
    idmap[num].push_back(i);
  }
 
  int R = n, L = n, LEN = 1, A = num;
  for (auto& [a, ids] : idmap) {
    int l = 0, r = 1, len = 1;
    while (r < ids.size()) {
      if (ids[r-1] + 1 == ids[r]) {
        ++len;
      } else {
        len = len - (ids[r] - ids[r-1]) + 2;
      }
      if (len <= 0) {
        l = r;
        len = 1;
      } else if (len > LEN) {
        A = a;
        LEN = len;
        R = ids[r];
        L = ids[l];
      }

      ++r;
    }
  }

  cout << A << ' ' << L << ' ' << R << '\n';

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
