#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159;
const double g = 9.81;

double toRad(double n) {
    return (n / 180) * PI;
}

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        double v0, theta, x1, h1, h2;
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        double t1 = x1 / (v0 * cos(toRad(theta)));
        double y1 = v0 * t1 * sin(toRad(theta)) - 0.5 * g * t1 * t1;
        if(h1 + 1 < y1 && y1 < h2 - 1) cout << "Safe";
        else cout << "Not Safe";
        cout << "\n";
    }
}