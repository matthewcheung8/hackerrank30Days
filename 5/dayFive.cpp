#include <iostream>
#include <cstdlib>

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
