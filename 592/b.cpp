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
        int n;
        cin >> n;
        int a = n, b = -1, cnt = 0;
        For(j,0,n) {
            char c;
            cin >> c;
            if (c == '1') {
                if (a == n) {
                    a = j;
                }
                b = j + 1;
                cnt++;
            }
        }
        cout << max(max(n + cnt, b * 2), (n - a) * 2) << endl;
    }
}
