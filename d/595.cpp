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
int main() {
    nosync;
    int n, k;
    cin >> n >> k;
    int l[n], r[n];
    vector<tuple<int,int,int>> lr;
    For (i, 0, n) {
        cin >> l[i] >> r[i];
        lr.eb(l[i], 0, i); // trick: make sure ls go before rs
        lr.eb(r[i], 1, i);
    }
    sort(begin(lr), end(lr));
    int h = 0;
    vector<int> ans;
    set<pii> rs;
    for (auto [_, t, i] : lr) {
        if (t == 0) {
            h++;
            rs.insert({r[i], i});
            if (h > k) {
                auto z = *rbegin(rs);
                rs.erase(z);
                ans.pb(z.se);
                h--;
            }
        } else {
            if (rs.count({r[i], i})) {
                h--;
                rs.erase({r[i], i});
            }
        }
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i+1 << ' ';
    cout << endl;
}
// soln by ioyeoa
