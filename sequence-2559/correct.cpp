#include <bits/stdc++.h>
using namespace std;

// N : 1 ~ 10만
// K : 1 ~ 10만  - 1(n사이의 값)
// 온도 : -100 ~ 100
// 연속된 온도의 합이 '최대' 되는 값 : 구간합 prefix sum, psum[i] = psum[i-1] + a[i];
// 이 문제의 최소값은? : -100이 10만번 연속으로  나오면 >> -1000만
//  최대값은 어디에서부터?

//  문제에서 최소값을 구하라 = 최소값 부터 최대값을
//  문제에서 최대값을 구하라 = 최대값 부터 최소값을

// ret = max(ret,value);  = 최대값 갱신
// ret = min(ret,value);  = 최소값 갱신

int n, k, temp, psum[100001], ret = -10000004;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> k;

  for (int i = 1; i <= n; i++) {
    cin >> temp;
    psum[i] = psum[i - 1] + temp;
  }

  for (int i = k; i <= n; i++) {
    ret = max(ret, psum[i] - psum[i - k]);
  }

  cout << ret << '\n';
  return 0;
}