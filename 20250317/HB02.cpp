#include <bits/stdc++.h>

using namespace std;

string re(string s){
  reverse(s.begin(), s.end());
  return s;
}

int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    string s;
    cin >> n;
    cin >> s;
    if(s > re(s)){
      if(n % 2 == 0){
        cout << re(s) << s << endl;
      }else{
        cout << re(s) << endl;
      }
    }else if(s < re(s)){
      if(n % 2 == 0){
        cout << s << endl;
      }else{
        cout << s << re(s) << endl;
      }
    }else{
      cout << s << endl;
    }
  }
}

