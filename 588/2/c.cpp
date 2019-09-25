#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define nosync ios::sync_with_stdio(false)
int main(){
    nosync;
    int n,m;
    cin>>n>>m;
    pii e[m];
    For(i,0,m)cin>>e[i].fi>>e[i].se;
    if(n<7){
        cout<<m<<endl;
        return 0;
    }
    int min_intersect=99;
    For(i,1,n+1){
        For(j,i+1,n+1){
            int intersect=0;
            For(k,1,n+1){
                if(k==i||k==j)
                    continue;
                int c=0;
                For(l,0,m)
                    if(e[l]==mp(i,k)||e[l]==mp(k,i)||e[l]==mp(j,k)||e[l]==mp(k,j))
                        c++;
                if(c==2)
                    intersect++;
            }
            min_intersect=min(min_intersect,intersect);
        }
    }
    cout<<m-min_intersect<<endl;
}
