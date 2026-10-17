/*
ID: samalas1
TASK: task
LANG: C++
GITHUB: https://github.com/SamalaSathvikReddy/Competitve_Programming
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 998244353;

long long add(long long a, long long b) {a%=mod;b%=mod;a+=b;a%=mod;{if(a<0)a+=mod;}return a;}
long long sub(long long a, long long b) {a%=mod;b%=mod;a-=b;a%=mod;{if(a<0)a+=mod;}return a;}
long long mul(long long a, long long b) {a%=mod;b%=mod;a*=b;a%=mod;{if(a<0)a+=mod;}return a;}

void solve() {

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  T = 1;
  // cin >> T;

  while (T--) {
		solve();
  }

  return 0;
}
