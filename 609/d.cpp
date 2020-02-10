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
    int n;
    cin >> n;
    int a[n];
    For (i, 0, n)
        cin >> a[i];
    ull ans[2] = {0};
    For (i, 0, n) {
        if (i%2 == 1) {
            ans[0] += (a[i]+1)/2;
            ans[1] += a[i]/2;
        } else {
            ans[0] += a[i]/2;
            ans[1] += (a[i]+1)/2;
        }
    }
    cout << min(ans[0], ans[1]) << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
