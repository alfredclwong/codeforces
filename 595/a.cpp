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
    int q;
    cin >> q;
    For (i, 0, q) {
        int n;
        cin >> n;
        int a[n];
        For (j, 0, n) {
            cin >> a[j];
        }
        sort(a, a + n);
        int ans = 1;
        For (j, 1, n) {
            if (a[j] == a[j - 1] + 1) {
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
}
