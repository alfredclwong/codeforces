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
    nosync;
    int n;
    cin>>n;
    pii a[n];
    For(i,0,n){
        a[i].fi=i+1;
        cin>>a[i].se;
    }
    int b[n],c=0;
    sort(a,a+n,[](pii a,pii b)->bool{return a.se>b.se;});
    For(i,0,n)c+=a[i].se*i+1;
    cout<<c<<endl;
    For(i,0,n)cout<<a[i].fi<<' ';
    cout<<endl;
}
