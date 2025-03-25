#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main() {
    // pair<int, string> student(1, "HiHi");
   //cout << student.first << " " << student.second << endl;

    vector < pair <int, string> > v;
    v.push_back({1, "HiHi"});

    cout << v[0].first << " " << v[0].second << endl;
}
//輸出 1 HiHi
