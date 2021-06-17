#include <bits/stdc++.h>
using namespace std;

#define chiahet_2(a) ((a) % 2 == 0) ? (1) : (0)
#define chiahet_5(a) ((a) % 5 == 0) ? (1) : (0)
#define chiahet_10(a) ((a) % 10 == 0) ? (1) : (0)

typedef long long ll;

ll loaibo_0(ll x) {
    while(chiahet_10(x)) {
        x /= 10;
    }
    return x;
}

ll demso_2(ll x) {
    ll hai = 0;
    while(chiahet_2(x)){
        x /= 2;
        hai++;
    }
    return hai;
}

ll demso_5(ll x) {
    ll nam = 0;
    while(chiahet_5(x)) {
        x /= 5;
        nam++;
    }
    return nam;
}

int main() {
    ll x , hai = 0, nam = 0, muoi = 0, kq = 1; 
    cin >> x;
    for(ll i = 1; i <= x; ++i) {
        kq *= loaibo_0(i);
        while(chiahet_5(kq)) {
            kq /= 5;
            nam++;
        }
        while(chiahet_2(kq)){
            kq /= 2;
            hai++;
        }
        kq = kq % 100000;
    }
    hai -= nam;

    while(hai--) {
        kq = (kq * 2) % 1000;
    }

    if(x > 6 && kq < 100) {
        if(kq < 10) {
            cout << "00" << kq;
        } else cout << "0" << kq;
    } else {
        cout << kq;
    }
}