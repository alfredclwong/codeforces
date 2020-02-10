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
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int c=0;
    for (int i=0;i<n;i+=2){
        if (s[i]==s[i+1]){
            c++;
            s[i]=s[i]=='a'?'b':'a';
        }
    }
    cout<<c<<endl<<s<<endl;
}
