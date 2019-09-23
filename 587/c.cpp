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
#define For(i,j,k) for (int i=(int)(j);i<(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define nosync ios::sync_with_stdio(false)
int main(){
    int x[6],y[6];
    For(i,0,6)cin>>x[i]>>y[i];
    if (x[2]<=x[0]&&x[3]>=x[1]){
        if (y[2]<=y[0]){
            if (y[3]>=y[1]){
                cout<<"NO"<<endl;
                return 0;
            }
            y[0]=max(y[0],y[3]);
        } else if (y[3]>=y[1]){
            y[1]=min(y[1],y[2]);
        }
    } else if (y[2]<=y[0]&&y[3]>=y[1]){
        if (x[2]<=x[0])
            x[0]=max(x[0],x[3]);
        else if (x[3]>=x[1])
            x[1]=min(x[1],x[2]);
    }
    if (x[4]<=x[0]&&x[5]>=x[1]&&y[4]<=y[0]&&y[5]>=y[1])
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
