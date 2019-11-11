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
    string s, t;
    cin >> s >> t;
    char st[n*2];
    For (i, 0, n) {
        st[i*2] = s[i];
        st[i*2+1] = t[i];
    }
    sort(st, st+n*2);
    For (i, 0, n) {
        if (st[i*2] != st[i*2+1]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    vector<pii> swaps;
    For (i, 0, n) {
        while (s[i] != t[i]) {
            bool swapped = false;
            For (j, i+1, n) {
                if (s[j] != t[j] && s[j] == s[i]) {
                    swaps.pb({i+1, j+1});
                    swap(s[i], t[j]);
                    swapped = true;
                    break;
                }
            }
            if (swapped)
                continue;
            For (j, i+1, n) {
                if (t[j] != s[j] && t[j] == s[i]) {
                    swaps.pb({i+1, i+1});
                    swap(s[i], t[i]);
                    swaps.pb({j+1, i+1});
                    swap(s[j], t[i]);
                    break;
                }
            }
        }
    }
    cout << swaps.size() << endl;
    for (pii swap : swaps)
        cout << swap.fi << ' ' << swap.se << endl;
}
int main() {
    nosync;
    int q = 1;
    cin >> q;
    For (i, 0, q)
        solve();
}
