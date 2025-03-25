#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int cnt = 0;
    cin >> n >> m;
    int s[n][m];
    for(int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> s[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if(s[i][j]==1){
                cnt += 1;
            }
        }
    }

    int cnt_now = 0;
    int ans = 0;

    while(cnt > cnt_now){
        ans += 1;
        int next_j = 0;

        for (int i = 0; i < n; i ++){
            for (int j = next_j; j < m; j ++){
                if (s[i][j] == 1){
                    cnt_now += 1;
                    next_j = j;
                    s[i][j] = 0;
                }
            }
        }
    }

    cout << ans;
}