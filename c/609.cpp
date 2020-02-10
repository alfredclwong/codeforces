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
    int n, k;
    cin >> n >> k;
    int a[n];
    char c;
    For (i, 0, n) {
        cin >> c;
        a[i] = c - '0';
    }
    bool done = false;
    int m = n;
    For (i, 1, (n-1)/k+1) {
        For (j, 0, min(k, n-i*k)) {
            if (a[j] < a[i*k+j]) {
                Rep (ii, k-1, 0) {
                    if (a[ii]++ < 9)
                        break;
                    if (ii == 0) // don't think this ever happens
                        m++;
                    else
                        a[ii] %= 10;
                }
                done = true;
                break;
            } else if (a[j] > a[i*k+j]) {
                done = true;
                break;
            }
        }
        if (done)
            break;
    }
    cout << m << endl;
    For (i, 0, (n-1)/k+1)
        For (j, 0, min(k, n-i*k))
            cout << a[j];
    cout << endl;
}
int main() {
    nosync;
    int q = 1;
    //cin >> q;
    For (i, 0, q)
        solve();
}
