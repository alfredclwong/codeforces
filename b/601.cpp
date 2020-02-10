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
    int n, m;
    cin >> n >> m;
    pii a[n];
    For (i, 0, n) {
        cin >> a[i].fi;
        a[i].se = i+1;
    }
    if (m < n || n==2) {
        cout << -1 << endl;
        return;
    }
    sort(a, a+n);
    cout << 2*(accumulate(a,a+n,0,[](int x,pii p){return x+p.fi;}))+(m-n)*(a[0].fi+a[1].fi) << endl;
    For (i, 0, n)
        cout << i+1 << ' ' << (i+1)%n+1 << endl;
    For (i, 0, m-n)
        cout << a[0].se << ' ' << a[1].se << endl;
}
int main() {
    nosync;
    int q = 1;
    cin >> q;
    For (i, 0, q)
        solve();
}
