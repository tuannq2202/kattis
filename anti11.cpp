#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int m = 1e9 + 7;

int main() {
    //freopen("input.txt", "r", stdin);
    ll binaryCount[10004];
    binaryCount[0] = 1; binaryCount[1] = 2;
    int T; cin >> T;
    for(int i = 1; i <= T; i++) {
        ll n; cin >> n;
        for(int j = 2; j <= n; j++) {
            binaryCount[j] = ((binaryCount[j-1] % m) + (binaryCount[j-2] % m) ) % m;
        }
        cout << binaryCount[n] << "\n";
    } 
}