#include <bits/stdc++.h>
using namespace std;

int n;
string s, input_s, pre, suf;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  cin >> input_s;
  int pos = input_s.find('*');
  pre = input_s.substr(0, pos);
  suf = input_s.substr(pos + 1);

  for (int i = 0; i < n; i++) {
    cin >> s;
    if (pre.size() + suf.size() > s.size()) {
      cout << "NE\n";
    } else {
      if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) {
        cout << "DA\n";
      } else {
        cout << "NE\n";
      }
    }
  }
  return 0;
}