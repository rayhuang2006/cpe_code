#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a;
    cin >> a;
    vector<int> v;
    while(a>0){
      int s;
      s = a%2;
      v.push_back(s);
      a = a / 2;
    }
    for(int i = v.size() -1; i >= 0; i--){
      cout << v[i];
    }
    cout << endl;
  }
}
