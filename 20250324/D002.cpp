#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, yp;
    cin >> n >> yp;
    vector< pair<string, int> > v(n);
    bool is = true;

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    for(int i = v.size()-1; i >= 0; i--){
        if(v[i].second > yp){
            for(int j = 0; j <= i; j++){
                cout << v[j].first << '\n';
            }
            cout << "菜就多練";
            is = false;
            break;
        }
    }

    if(is){
        cout << "恭喜打完所有屁屁";
    }
}