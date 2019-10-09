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
int gcd(int a,int b){
    return a%b?gcd(b,a%b):b;
}
int main(){
    int n,d,e;
    cin>>n>>d>>e;
    e*=5;
    //n%=d*e/gcd(d,e);
    int ans=n;
    For(i,0,n/d+1){
        ans=min(ans,(n-d*i)%e);
    }
    cout<<ans<<endl;
}
