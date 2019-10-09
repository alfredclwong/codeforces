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
    int l,r;
    cin>>l>>r;
    For(i,l,r+1){
        For(j,0,6){
            if (pow(10,j)>i){
                set<int> digits;
                For(k,0,j){
                    digits.insert(i/(int)pow(10,k)%10);
                }
                if (digits.size()==j){
                    cout<<i<<endl;
                    return 0;
                }
                break;
            }
        }
    }
    cout<<-1<<endl;
}
