#include <iostream>

using namespace std;

int main(){
  int x{};
  int y{};
//   int sum{};
//   sum = x+y;
//   int diff{};
//   diff = x-y;
  cout << "x : " ;
  cin >> x;
  cout << "y : " ;
  cin >> y;
  cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
  cout << "The difference between " << x << " and " << y << " is " << x - y << endl;

  return 0;
}
