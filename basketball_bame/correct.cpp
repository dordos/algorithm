#include <bits/stdc++.h>
using namespace std;

string s, ret;
int n, cnt[26];
int main() {
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    cnt[s[0] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (cnt[i] >= 5) {
      ret += char(i + 'a');
    }
  }

  if (ret.size()) {
    cout << ret << "\n";
  } else {
    cout << "PREDAJA"
         << "\n";
  }
  return 0;
}