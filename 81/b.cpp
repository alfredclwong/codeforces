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
    ll n, x, b = 0, d, ans = 0;
    cin >> n >> x;
    string s;
    cin >> s;
    For (i, 0, n)
        b += (s[i] == '0' ? 1 : -1);
    d = b;
    b = 0;
    if (x == 0)
        ans++;
    For (i, 0, n) {
        b += (s[i] == '0' ? 1 : -1);
        if (d == 0 && b == x) {
            cout << -1 << endl;
            return;
        }
        if (d != 0 && (x - b) % d == 0 && (x - b) / d >= 0)
            ans++;
    }
    cout << ans << endl;
}
int main() {
    nosync;
    int q = 1;
    cin >> q;
    For (i, 0, q)
        solve();
}
