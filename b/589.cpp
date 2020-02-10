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
int main(){
    int h,w;
    cin>>h>>w;
    int r[h],c[w];
    For(i,0,h)
        cin>>r[i];
    For(i,0,w)
        cin>>c[i];
    For(i,0,h){
        For(j,0,w){
            if(i==c[j]&&j<r[i]||i<c[j]&&j==r[i]){
                cout<<0<<endl;
                return 0;
            }
        }
    }
    int m=1000000007;
    int s=0;
    For(i,0,h){
        For(j,0,w){
            if(i>c[j]&&j>r[i])
                s++;
        }
    }
    ll ans=1;
    For(i,0,s)
        ans=(ans<<1)%m;
    cout<<ans<<endl;
}
