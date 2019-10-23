#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>
#include<math.h>
#include<set>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<ll,ll>
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
    int X = 200000;
    vector<int> x[X];
    For (i, 0, n) {
        cin >> l[i] >> r[i];
        For (j, l[i] - 1, r[i]) {
            x[j].pb(i);
        }
        l[i]--;
        r[i]--;
    }
    For (i, 0, X) {
        if (!x[i].empty()) {
            cout << i << ' ';
            for (int p : x[i])
                cout << p << ' ';
            cout << endl;
        }
    }
}
