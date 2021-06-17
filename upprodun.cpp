#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int soNguoiMotHang = m / n;
    int soNguoiThua = m % n;
    for (int i=0;i<n;i++)
    {
        int coNguoiThua;
        if(soNguoiThua > 0) {
            coNguoiThua = 1;
            soNguoiThua--;
        } else {
            coNguoiThua = 0;
        }
        for(int j=0;j < soNguoiMotHang + coNguoiThua;j++) {
            cout << "*";
        }
        cout << "\n";
    }
}