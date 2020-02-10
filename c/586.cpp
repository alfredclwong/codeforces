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
    string s;
    cin >> s;
    cout << "Mike" << endl;
    char least = s[0];
    For(i,1,s.length()){
        if (s[i]>least){
            cout << "Ann" << endl;
        }
        else{
            least = s[i];
            cout << "Mike" << endl;
        }
    }
}
