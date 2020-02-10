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
    int n, sx, sy;
    cin >> n >> sx >> sy;
    int x[n], y[n], c[4] = {0};
    For (i, 0, n) {
        cin >> x[i] >> y[i];
        if (x[i] > sx)
            c[0]++;
        else if (x[i] < sx)
            c[2]++;
        if (y[i] > sy)
            c[1]++;
        else if (y[i] < sy)
            c[3]++;
    }
    int argmax = 0;
    For (i, 0, 4)
        if (c[i] > c[argmax])
            argmax = i;
    cout << c[argmax] << endl;
    pii answers[] = {{sx+1, sy}, {sx, sy+1}, {sx-1, sy}, {sx, sy-1}};
    cout << answers[argmax].fi << ' ' << answers[argmax].se << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
