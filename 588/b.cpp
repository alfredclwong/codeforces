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
    int n,k;
    cin>>n>>k;
    if(n==1&&n==k){
        cout<<0<<endl;
        return 0;
    }
    char s[n];
    cin>>s;
    For(i,0,n){
        if(k==0)
            cout<<s[i];
        else if(i==0&&s[0]>'1'){
            cout<<1;
            k--;
        }else if(i>0&&s[i]>'0'){
            cout<<0;
            k--;
        }
        else
            cout<<s[i];
    }
    cout<<endl;
}
