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
    int q,n,r;
    cin>>q;
    For(i,0,q){
        cin>>n>>r;
        int x[n];
        For(j,0,n){
            cin>>x[j];
        }
        sort(x,x+n,greater<int>());
        int rep=0;
        bool done=false;
        For(j,0,n){
            if(j>0&&x[j]==x[j-1]){
                ++rep;
                continue;
            }
            if(x[j]<=r*(j-rep)){
                cout<<j-rep<<endl;
                done=true;
                break;
            }
        }
        if(!done){
            cout<<n-rep<<endl;
        }
    }
}
