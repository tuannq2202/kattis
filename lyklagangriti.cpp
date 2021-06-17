#include<bits/stdc++.h>
#include<string>
using namespace std;

#define MAX 1000006

int main() {
    freopen("input.txt", "r", stdin);
    char ch;
    int pointer = 0, len = 0;
    string str;
    while(cin >> ch) {
        if(ch != 'L' && ch != 'R' && ch != 'B') {
            str.insert(pointer, 1, ch);
            len = str.length();
            pointer++;
        }
        if(pointer > 0 && ch == 'L') {
            pointer--;
        }
        if(ch == 'R' && pointer < len) {
            pointer++;
        }
        if(ch == 'B') {
            str.erase(pointer-1, 1);
            pointer--;
        }
    }
    cout << str;
}