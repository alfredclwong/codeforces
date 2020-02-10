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
    ll n, p, w, d;
    cin >> n >> p >> w >> d;
    For (i, 0, min(w, p / d + 1)) {
        if ((p - i * d) % w == 0) {
            ll wins = (p - i * d) / w,
               draws = i,
               losses = n - wins - draws;
            if (losses < 0) {
                break;
            }
            cout << wins << ' ' << draws << ' ' << losses << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
