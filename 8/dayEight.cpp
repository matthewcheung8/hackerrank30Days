#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, int> phoneBook;
  int n;
  cin >> n;
  for (int a=0; a<n; a++) {
    string name;
    int number;
    cin >> name;
    cin >> number;
    phoneBook[name] = number;
  }
  
  string input;
  while(1) {
    cin >> input;
    auto i = phoneBook.find(input);
    if (i == phoneBook.end())
      cout << "Not found" << endl;
    else
      cout << input << "=" << phoneBook[input] << endl;
    if (cin.eof())
      break;
  }
  
  return 0;
}
