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
    nosync;
    int n;
    cin>>n;
    ull a[n],b[n];
    For(i,0,n)
        cin>>a[i];
    For(i,0,n)
        cin>>b[i];
    bool e[n][n];
    For(i,0,n){
        For(ii,0,n){
            e[i][ii]=i!=ii&&((a[i]&a[ii])==a[i]);
        }
    }
    set<int> group;
    For(i,0,n)
        group.insert(group.end(),i);
    bool done=false;
    while(!done){
        done=true;
        for(auto it=group.begin();it!=group.end();){
            bool calm=false;
            for(int i:group){
                if(e[*it][i]){
                    calm=true;
                    break;
                }
            }
            if(!calm){
                done=false;
                it=group.erase(it);
            } else
                it++;
        }
    }
    ull sum=0;
    for(int i:group){
        sum+=b[i];
    }
    cout<<sum<<endl;
}
