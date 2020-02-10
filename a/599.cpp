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
    Rep (i, n, 1) {
        int c = 0;
        For (j, 0, n) {
            if (a[j] >= i)
                c++;
            if (c >= i) {
                cout << i << endl;
                return;
            }
        }
    }
}
int main() {
    nosync;
    int q = 1;
    cin >> q;
    For (i, 0, q)
        solve();
}
