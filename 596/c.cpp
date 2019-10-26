#include<algorithm>
#include<iostream>
#include<math.h>
#include<numeric>
#include<set>
#include<tuple>
#include<vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define puu pair<ull,ull>
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define nosync ios::sync_with_stdio(false)
int count1s(int n) {
    int c = 0;
    while (n) {
        c += n & 1;
        n >>= 1;
    }
    return c;
}
void solve() {
    int n, p;
    cin >> n >> p;
    int ans = 1;
    while (n - ans*p > 0) {
        if (count1s(n - ans*p) <= ans) {
            cout << ans << endl;
            return;
        }
        ans++;
    }
    cout << -1 << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
