#include<bits/stdc++.h>
using namespace std;

vector<int> color;

int findColor(int cls) {
    if(color[cls] == -1) return cls;
    color[cls] = findColor(color[cls]);
    return color[cls]; 
}

void coloring(int cls_a, int cls_b) {
    int color_a = findColor(cls_a), color_b = findColor(cls_b);
    if(color_a != color_b) {
        color[color_b] = color_a;
    }
}

int main()
{
    //freopen("ten.txt", "r", stdin);
    int n,m,k;
    cin >> n >> m >> k;
    vector <vector<int>> a(n , vector<int>(m));
    color.resize(k, -1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            a[i][j] = (int)(ch - 'A');
        }
    }
    int color_need = 0;
    for(int j = 0; j < m ; j++) {
        for(int i = 0; i < n; i++) {
            if(i == 0) continue;
            coloring(a[i][j], a[i-1][j]);
        }
    }

    for(int c : color) {
        if (c == -1) ++ color_need;
    }
    cout << color_need;
}