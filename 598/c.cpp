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
    int n, m, d;
    cin >> n >> m >> d;
    int c[m];
    For (i, 0, m)
        cin >> c[i];
    int sum = accumulate(c, c+m, 0);
    if (sum + (m+1)*(d-1) < n) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int ans[n] = {0}, x = 0, excess = sum + m*(d-1) - n;
    For (i, 0, m) {
        For (j, 0, d-1) {
            if (excess > 0)
                excess--;
            else
                x++;
        }
        For (j, 0, c[i])
            ans[x++] = i+1;
    }
    For (i, 0, n)
        cout << ans[i] << ' ';
    cout << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
