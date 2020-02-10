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
        int p[n];
        For (j, 0, n) {
            cin >> p[j];
        }
        int a[n] = {0};
        For (j, 0, n) {
            if (a[j] != 0) {
                continue;
            }
            vector<int> c;
            int k = j;
            do {
                c.pb(k);
                k = p[k] - 1;
            } while (k != j);
            for (int k : c) {
                a[k] = c.size();
            }
        }
        For (j, 0, n) {
            cout << a[j] << ' ';
        }
        cout << endl;
    }
}
