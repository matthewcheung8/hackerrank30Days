#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  double mealCost, tip, tax;
  int tipPercent, taxPercent, totalCost;
  
  cin >> mealCost;
  cin >> tipPercent;
  cin >> taxPercent;

  tip = mealCost * tipPercent/100;
  tax = mealCost * taxPercent/100;
  totalCost = round(tax + tip + mealCost);

  cout << "The total meal cost is " << totalCost << " dollars." << endl;

  return 0;
}
