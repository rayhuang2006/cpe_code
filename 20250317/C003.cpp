#include <bits/stdc++.h>

using namespace std;

int gcc(int a, int b){
    int an;
    while(b != 0){
        an = a % b;
        a = b;
        b = an;
    }

    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int ain, bin, a, b;
        cin >> ain >> bin;

        if(ain >= bin){
            a = ain;
            b = bin;
        }else if(ain < bin){
            a = bin;
            b = ain;
        }

        if(a == b){
            if(t>0){
                cout << a << '\n';
            }else{
                cout << a;
            }
        }else{
            if(t>0){
                cout << gcc(a, b) << '\n';
            }else{
                cout << gcc(a, b);
            }
        }
    }
}