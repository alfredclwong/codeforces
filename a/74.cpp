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
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);++i)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);--i)
#define nosync ios::sync_with_stdio(false)
int main(){
    int t;
    cin >> t;
    ull x, y;
    For(i,0,t) {
        cin >> x >> y;
        cout << ((x - y > 1)? "YES" : "NO") << endl;
    }
}
