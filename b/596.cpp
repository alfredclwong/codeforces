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
    int n, k, d;
    cin >> n >> k >> d;
    int a[n];
    For (i, 0, n) {
        cin >> a[i];
        a[i]--;
    }
    int s = 0, ans = k, c[k] = {0};
    For (i, 0, d)
        if (c[a[i]]++ == 0)
            s++;
    ans = min(ans, s);
    For (i, d, n) {
        if (--c[a[i-d]] == 0)
            s--;
        if (c[a[i]]++ == 0)
            s++;
        ans = min(ans, s);
    }
    cout << ans << endl;
}
int main() {
    nosync;
    int q;
    cin >> q;
    For (i, 0, q)
        solve();
}
