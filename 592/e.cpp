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
    ull n, k;
    cin >> n >> k;
    ull a[n];
    For (i, 0, n) {
        cin >> a[i];
    }
    sort(a, a + n);
    ull bot = 0, top = n - 1;
    while (true) {
        while (bot < n - 1 && a[bot + 1] == a[bot]) {
            bot++;
        }
        while (top > 0 && a[top - 1] == a[top]) {
            top--;
        }
        if (bot >= top) {
            break;
        }
        if (bot <= n - 1 - top) {
            if (bot < k) {
                ull _k = (a[bot + 1] - a[bot]) * (bot + 1);
                if (_k <= k) {
                    k -= _k;
                    bot++;
                } else {
                    a[bot] += k / (bot + 1);
                    break;
                }
            } else {
                break;
            }
        } else {
            if (n - 1 - top < k) {
                ull _k = (a[top] - a[top - 1]) * (n - top);
                if (_k <= k) {
                    k -= _k;
                    top--;
                } else {
                    a[top] -= k / (n - top);
                    break;
                }
            } else {
                break;
            }
        }
    }
    cout << a[top] - a[bot] << endl;
}
