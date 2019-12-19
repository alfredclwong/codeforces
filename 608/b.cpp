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
    char s[n];
    pii bw;
    For (i, 0, n) {
        cin >> s[i];
        if (s[i] == 'B')
            bw.fi++;
        else
            bw.se++;
    }
    vector<int> operations;
    bool pushing = false;
    char c;
    if (bw.fi % 2 == 1) {
        if (bw.se % 2 == 1) {
            cout << -1 << endl;
            return;
        }
        c = 'W';
    } else {
        c = 'B';
    }
    For (i, 0, n - 1) {
        if (s[i] == c && s[i + 1] == c) {
            operations.pb(i+1);
            s[i] = c == 'B' ? 'W' : 'B';
            s[i + 1] = s[i];
        }
    }
    For (i, 0, n - 1) {
        if (s[i] == c) {
            pushing = !pushing;
        }
        if (pushing) {
            operations.pb(i+1);
        }
    }
    cout << operations.size() << endl;
    for (int op : operations)
        cout << op << ' ';
    cout << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
