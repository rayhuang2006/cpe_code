#include <iostream>
#include <cmath>

using namespace std;

bool p(long long a){
  if(a==2){
    return true;
  }
  if(a%2 == 0){
    return false;
  }
  for(long long i = 3; i <= sqrt(a); i += 2){
    if(a%i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long a;
    cin >> a;
    
    if(p(a)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}

