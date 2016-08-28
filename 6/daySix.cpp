#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin >> n;

  for (int i = 0; i<n; i++) {
    string str="", str1 = "", str2 = "";
    cin >> str;
    for (int a = 0; a<str.length(); a++) {
      if (a%2 == 0) {
	str1 += str[a];
      }
      else {
	str2 += str[a];
      }
    }
    cout << str1 << " " << str2 << endl;
  }

  return 0;
}
