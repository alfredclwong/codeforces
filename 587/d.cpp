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
ll gcd(ll a,ll b){
    if (min(a,b)==0)return max(a,b);
    return min(a%b,b%a)==0?min(a,b):gcd(a%b,b%a);
}
int main(){
    int n;
    cin>>n;
    ll a[n];
    For(i,0,n)cin>>a[i];
    ll x=accumulate(a,a+n,a[0],[](ll a,ll b)->ll{return max(a,b);});
    For(i,0,n)a[i]=x-a[i];
    ll z=a[0];
    For(i,1,n)z=gcd(z,a[i]);
    cout<<accumulate(a,a+n,0ll)/z<<' '<<z<<endl;
}
