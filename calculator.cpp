#include <iostream>

using namespace std;

int main(){
  int x{};
  int y{};
  int sum{};
  sum = x+y;
  int diff{};
  diff = x-y;
  cout << "x : " ;
  cin >> x;
  cout << "y : " ;
  cin >> y;
  cout << "The sum of " << x << " and " << y << " is " << sum << endl;
  cout << "The difference between " << x << " and " << y << " is " << diff << endl;

  return 0;
}
