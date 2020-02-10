#include <iostream>
#include <vector>
using namespace std;
#define ll long long
 
int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    ll res = 0;
    pair<ll, ll> accs = {0, 0};
    ll * acc = &accs.first;
    ll * other = &accs.second;
    bool start = false;
    for (ll i = n - 1; i >= 0; i--) {
        (*acc)++;
        if (a[i] < 0) {
            start = true;
            swap(acc, other);
        }
        res += start * (*other);
    }
 
    cout << res << ' ' << n * (n + 1) / 2 - res << endl;
}

