#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>
#include<math.h>
#include<set>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define nosync ios::sync_with_stdio(false)
ull mod = 1000000007;
ull mpow(ull a, ull b) {
    a %= mod;
    ull ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
int main() {
    nosync;
    ull n, m;
    cin >> n >> m;
    cout << mpow(mpow(2, m) - 1, n) << endl;
}
