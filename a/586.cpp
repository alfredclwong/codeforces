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
    ll n;
    cin >> n;
    char s[n];
    cin >> s;
    ll ones = 0, zeroes=0;
    for (char c:s){
        if (c=='n'){
            ones++;
            cout << "1 ";
        } else if (c=='z'){
            zeroes++;
        }
    }
    For(i,0,zeroes){
        cout << "0 ";
    }
    cout << endl;
}
