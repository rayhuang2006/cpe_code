#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    for(int i =0 ; i < n; i++){
        cin >> s[i];
    }

    int ps[n];

    for(int i = 0; i < n; i++){
        if(i == 0){
            ps[i] = s[i];
        }else{
            ps[i] = ps[i-1] + s[i];
        }
        
    }

    for(int i = 0; i < n; i++){
        if(i == n-1){
            cout << ps[i];
        }else{
            cout << ps[i] << ' ';
        }

    }
    cout << '\n';
    
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b;
        bool isodd = true;
        cin >> a >> b;
        if(a == 1){
            if(ps[b-1] % 2 == 0){
                isodd = false;
            }
        }else{
            if((ps[b-1]-ps[a-2])%2 == 0){
                isodd = false;
            }
        }

        if(isodd){
            if(i==t-1){
                cout << "YES";
            }else{
                cout << "YES" << '\n';
            }
        }else{
            if(i==t-1){
                cout << "NO";
            }else{
                cout << "NO" << '\n';
            }
        }
    }

}