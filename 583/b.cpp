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
    int b,g,n;
    cin>>b>>g>>n;
    cout<<n+1-max(0,n-g)-max(0,n-b)<<endl;
}
