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
void solve() {
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    For (i, 0, n)
        cin >> a[i];
    For (i, 0, n)
        cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);
    bool done;
    ll x, ans = m;
    For (i, 0, n) {
        x = b[i] - a[0] + m;
        done = true;
        For (j, 0, n)
            if ((a[j] + x - b[(i+j)%n]) % m != 0) {
                done = false;
                break;
            }
        if (done)
            ans = min(ans, x%m);
    }
    cout << ans << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
