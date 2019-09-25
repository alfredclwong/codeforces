#include<algorithm>
#include<iostream>
#include<vector>
#include<numeric>
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
    nosync;
    int a[4];
    For(i,0,4)cin>>a[i];
    int total=accumulate(a,a+4,0);
    if (total%2==1){
        cout<<"NO"<<endl;
        return 0;
    }
    int target=total/2;
    For(i,0,16){
        int sum=0;
        For(j,0,4){
            if ((i>>j)&1){
                sum+=a[j];
            }
        }
        if (sum==target){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
