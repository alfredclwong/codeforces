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
    int q;
    cin>>q;
    For(i,0,q){
        int h,n;
        cin>>h>>n;
        int p[n];
        For(j,0,n){
            cin>>p[j];
        }
        int ans=0;
        For(j,1,n){
            if(p[j]<h-1){
                h=p[j]+1;
            }
            if(h<=2){
                break;
            }
            if(j==n-1){
                ++ans;
            }else if(p[j+1]==h-2){
                h-=2;
                ++j;
            }else{
                ++ans;
                --h;
            }
        }
        cout<<ans<<endl;
    }
}
