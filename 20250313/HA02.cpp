#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  double r1, r2, r3;
  
  if(d-c==c-b && c-b==b-a){
      cout << d + (d-c);
  }else if((double) d/c == (double)c/b && (double)c/b == (double)b/a){
      cout << d*d/c;
  }else{
    cout << "關羽快樂嗎";
  }
}