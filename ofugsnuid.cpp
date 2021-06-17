#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
    //freopen("input.txt", "r", stdin);
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int _mid = (n / 2);
    for(int i = 0; i < _mid; i++){
        int tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp; 
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
}