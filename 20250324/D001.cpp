#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector < pair <int, int> > v;
    
    for(int i = 0; i < K; i++){
        pair <int, int> p;
        cin >> p.first >> p.second;

        v.push_back(p);
    }

    vector < set <int> > v2(N);

    for(int i = 0; i < N; i++){

        for(int j = 0; j < v.size(); j++){
            if (v[j].first == i+1){
                v2[i].insert(v[j].second);
            } 
            
            if (v[j].second == i+1){
                v2[i].insert(v[j].first);
            } 
        }
    }

    for(int i = 0; i < N; i++){
        int count = 0;
        for(set<int>::iterator it = v2[i].begin(); it != v2[i].end(); it++){
            cout << *it;
            count++;
            if(count < v2[i].size()){
                cout << " ";
            }
        }
        if(i != N-1){
            cout << '\n';
        }
    }
}