/**
*  QUESTION STATEMENT 
*
*  >--------------------------------Maximum of 3 given integers----------------------------------------<
*
*  Complete the following function so that it returns the maximum of the three given integers x, y and z.
*/

// SOLUTION

#include <iostream>

using namespace std;

int max3(int x, int y, int z) {
  if(x >= y) {
	if (x > z)
      return x;
	else 
      return z;
  } else if(y >= z) {
    return y;
  } 
  return z;
}
int main() {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << max3(x, y, z) << endl;
    return 0;
}
