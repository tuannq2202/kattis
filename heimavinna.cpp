#include<bits/stdc++.h>
#define pb push_back
using namespace std;

unsigned int find(string str){
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '-') {
            return i;
        }
    }
    return -1;
}

int calculate(string str) {
    int foundIndex = find(str);
    if(foundIndex == -1) {
        return 1;
    }
    else {
        int left = 0, right = 0;
        for(unsigned int i = 0; i < foundIndex; i++) {
            left = left * 10 + (int)(str[i] - '0');
        }
        for(unsigned int i = foundIndex + 1; i < str.length(); i++) {
            right= right * 10 + (int)(str[i] - '0');
        }
        return right - left + 1;
    }
}

int main()
{
    vector<string> inputString;
    freopen("input.txt", "r", stdin);
    char ch;
    string str = "";

    while(cin >> ch) {
        if(ch != ';') {
            str += ch;
        }
        else if(ch == ';'){
            inputString.pb(str);
            str.clear();
        }
    }
    inputString.pb(str);

    int numberProblems = 0;
    for(int i = 0; i < inputString.size(); i++) {
        numberProblems += calculate(inputString[i]);
    }
    cout << numberProblems;
}