#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
  int N;
  cin >> N;
  
  for (int i=1; i<11; i++) {
    int answer = N*i;
    cout << N << " x " << i << " = " << answer << endl;
  }
  
  return 0;
}
