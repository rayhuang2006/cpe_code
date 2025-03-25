#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int t1;
  cin >> t1;
  int s[t1];
  for(int i = 0; i < t1; i++){
    cin >> s[i];
  }
  
  int t2;
  cin >> t2;
  while(t2--){
    int sum = 0;
    int x;
    cin >> x;
    for(int i = 0; i < t1; i++){
      sum += pow(x,i)*s[i];
    }
    cout << sum << endl;
  }
}
