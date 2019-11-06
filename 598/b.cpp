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
    int prev = 0;
    while (prev < n-1) {
        int idx = prev;
        For (i, prev, n)
            idx = a[i] < a[idx] ? i : idx;
        Rep(i, idx-1, prev) {
            if (a[i] < a[i+1])
                break;
            swap(a[i], a[i+1]);
        }
        if (prev == idx)
            prev++;
        else
            prev = idx;
    }
    For (i, 0, n)
        cout << a[i] << ' ';
    cout << endl;
}
int main() {
    nosync;
    int q;
    cin >> q;
    For (i, 0, q)
        solve();
}
