#include<bits/stdc++.h>
using namespace std;

int dd[1003] = {0};

int main() {
    //freopen("input.txt", "r", stdin);
    int x, count = 0;
    while(cin >> x) {
        int r = x % 42;
        if(dd[r] == 0) {
            ++count;
            dd[r] = 1;
        }
    }
    cout << count;
}