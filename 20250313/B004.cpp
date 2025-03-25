#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  int v1[n][n];
  for(int i = 0; i<n; i++){
    for (int j = 0; j<n; j++){
      cin >> v1[i][j];
    }
  }
  
  int v2[n][n];
  for(int i = 0; i<n; i++){
    for (int j = 0; j<n; j++){
      v2[n-1-j][i]=v1[i][j];
    }
  }
  
  
  for(int i = 0; i<n; i++){
    for (int j = 0; j<n; j++){
      if (j == n-1){
        cout << v2[i][j];
      }else{
        cout << v2[i][j] << ' ';
      }
      
    }
    cout << endl;
  }
}

