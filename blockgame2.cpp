#include <iostream>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    return a >= b ? a : b;
}

int win_if_start(ll a, ll b) {
    ll bigger = max(a, b);
    ll smaller = a + b - bigger;
    if(bigger % smaller == 0) return 1;
    int win_after_switch = win_if_start(bigger % smaller, smaller);
    if(bigger >= 2 * smaller) return 1;
    else {
        return !win_after_switch;
    }
}

int main() {
    ll a, b;
    cin >> a >> b;
    if(win_if_start(a, b) == 1) {
        cout << "win";
    } else {
        cout << "lose";
    }
}