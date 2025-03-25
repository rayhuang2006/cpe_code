#include <bits/stdc++.h>

using namespace std;

set <string> ans;

void arr(string s, string stemp, set < int > v) {

    int sl, stempl;
    sl = s.size();
    stempl = stemp.size();

    if(sl == stempl){
        ans.insert(stemp);
        return;
    }

    for(int i = 0; i < sl; i++){
        if(v.count(i) == 0){
            v.insert(i);
            arr(s, stemp+s[i], v);
            v.erase(i);
        }
    }

}

int main() {

    string s;
    cin >> s;

    set < int > v;
    arr(s, "", v);

    for(auto ansmat: ans){
        cout << ansmat << '\n';
    }
}