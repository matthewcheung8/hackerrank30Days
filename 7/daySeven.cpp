#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> arr(n);

  for(int arr_i = 0;arr_i < n;arr_i++){
    cin >> arr[arr_i];
  }

  for(int rarr_i = n-1; rarr_i > 0; rarr_i--){
    cout << arr[rarr_i] << " ";
  }

  cout << arr[0] << endl;

  return 0;
}
