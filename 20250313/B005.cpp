#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sum_string (string a, string b) {
  string c = a+b;
  reverse(c.begin(), c.end());
  return c;
}

int sum_int (int a, int b) {
  return a+b;
}

int main(void) {
  int x1,x2;
  cin >> x1 >> x2;
  string s1,s2;
  cin >> s1 >> s2;
  cout << sum_int(x1,x2) << endl << sum_string(s1,s2);
}

