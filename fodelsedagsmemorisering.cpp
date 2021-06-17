#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

map <string , pair<string ,int>> input;

int main()
{
    //freopen("ten1.txt","r",stdin);
    int n;
    string name,date;
    int like; 
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> name >> like >> date;
        if(!input.count(date)) {
            input[date] = { name,like };
        } else {
            if(like > input[date].second) {
                input[date] = {name, like};
            }
        }
    }
    cout << input.size() << "\n";
    vector<string> output;
    for(auto &it : input) {
        output.push_back(it.second.first);
    }
    sort(output.begin(), output.end());
    for(string name : output) {
        cout << name << "\n";
    }
}