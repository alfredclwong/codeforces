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
    For (i, 0, t) {
        int a, b, c;
        cin >> a >> b >> c;
        int x1, x2, y1, y2;
        x1 = min(a, b / 2);
        y1 = min(b - x1 * 2, c / 2);
        y2 = min(b, c / 2);
        x2 = min(a, (b - y2) / 2);
        cout << max(x1 + y1, x2 + y2) * 3 << endl;
    }
}
