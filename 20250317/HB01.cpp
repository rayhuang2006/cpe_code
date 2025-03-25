#include <bits/stdc++.h>

using namespace std;

int main(){
  int s1, s2, d;
  cin >> s1 >> s2 >> d;
  int s1v[8];
  int s2v[8];
  int s1vn[8];
  int s2vn[8];
  
  for(int i = 0; i < 8; i++){
    int s = s1 % 2;
    s1v[7-i] = s;
    s1 = s1 / 2;
  }
  
  for(int i = 0; i < 8; i++){
    int s = s2 % 2;
    s2v[7-i] = s;
    s2 = s2/ 2;
  }
  
  for(int i = 0; i < 8; i++){
    cout << s1v[i];
  }
  
  cout << ' ';
  
  for(int i = 0; i < 8; i++){
    cout << s2v[i];
  }
  
  cout << '\n';
  
  for(int i = 0; i < 8; i++){
    s1vn[i] = s2v[i];
  }
  
  for(int i = 0; i < 8; i++){
    s2vn[i] = s1v[i];
  }
  
  for(int i = 0; i < 8-d; i++){
    s1vn[i] = s1v[i];
  }
  
  for(int i = 0; i < 8-d; i++){
    s2vn[i] = s2v[i];
  }
  
  for(int i = 0; i < 8; i++){
    cout << s1vn[i];
  }
  
  cout << ' ';
  
  for(int i = 0; i < 8; i++){
    cout << s2vn[i];
  }
}
