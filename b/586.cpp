#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define nosync ios::sync_with_stdio(false)
int main(){
    int n;
    cin >> n;
    int m[n][n];
    For(i,0,n)
        For(j,0,n)
            cin >> m[i][j];
    ll ab = m[0][1], ac = m[0][2], bc = m[1][2];
    int a = sqrt(ab * ac / bc);
    cout << a;
    For(i,1,n)
        cout <<  ' ' << m[0][i]/a;
    cout << endl;
}
