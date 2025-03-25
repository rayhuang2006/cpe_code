#include <bits/stdc++.h>

using namespace std;

bool isWord(string N, string a){

    int checki = 0;
    string a_capital;

    for(int i = 0; i< a.length(); i++){
        a_capital[i] =  a[i] - ('a'-'A');
    }

    for(int i = 0; i < N.length(); i++){

        if(N[i]==a[checki] || N[i]==a_capital[checki]){
            checki += 1;
        }

        if(checki == a.length()){
            return true;
        }
    }
    return false;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        string N;
        cin >> N;
        if(isWord(N, "fish")){
            if(isWord(N, "happy")){
                cout << (t > 0 ? "happy\n" : "happy");
            }else{
                cout << (t > 0 ? "nothappy\n" : "nothappy");
            }
        }else{
            cout << (t > 0 ? "notfish\n" : "notfish");
        }
    }
}