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
    if (n % 2) {
        cout << '7';
        n -= 3;
    }
    for (; n>0; n-=2)
        cout << '1';
    cout << endl;
}
int main() {
    nosync;
    int q = 1;
    cin >> q;
    For (i, 0, q)
        solve();
}
