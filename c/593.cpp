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
    int n;
    cin >> n;
    For (j, 0, n) {
        For (i, 0, n)
            cout << i * n + (i & 1 ? j : n - 1 - j) + 1 << ' ';
        cout << endl;
    }
}
