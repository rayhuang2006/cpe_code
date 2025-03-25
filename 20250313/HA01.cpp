#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << 31 - (m%2 == 0 and m<8) - (m%2 == 1 and m>=8) -(m==2) -(m==2 && n%4 != 0) -(m==2 && n%100 == 0 and n%400 != 0)<< endl;
}
