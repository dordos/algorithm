#include <bits/stdc++.h>
using namespace std;

string str;
int cnt[26];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> str;

  for (int i = 0; i < str.size(); i++) {
    cnt[str[i] - 'a'] += 1;
  }
  for (int i = 0; i < 26; i++) {
    cout << cnt[i] << ' ';
  }

  return 0;
}