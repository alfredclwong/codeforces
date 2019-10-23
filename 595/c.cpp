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
int main() {
    nosync;
    int q;
    cin >> q;
    For (i, 0, q) {
        ull n;
        cin >> n;
        vector<int> tern;
        while (n > 0) {
            tern.pb(n%3);
            n/=3;
        }
        int last = -1;
        For (j, 0, tern.size()) {
            if (tern[j] == 2)
                last = j;
        }
        For (j, 0, tern.size()) {
            if (j < last) {
                tern[j] = 0;
                continue;
            }
            if (tern[j] == 2) {
                tern[j] = 0;
                if (j < tern.size()-1)
                    tern[j+1]++;
                else
                    tern.pb(1);
            } else
                break;
        }
        ull m = 0;
        For (j, 0, tern.size())
            if (tern[j]) {
                ull p = 1;
                For (k, 0, j)
                    p *= 3;
                m += p;
            }
        cout << m << endl;
    }
}
