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
    int t;
    cin >> t;
    For(i,0,t) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        a = (a - 1) / c + 1;
        b = (b - 1) / d + 1;
        if (a + b <= k) {
            cout << a << ' ' << b << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
