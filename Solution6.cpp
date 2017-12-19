/**
*  QUESTION STATEMENT 
*
*  >--------------------------------Additive sequence of an array-------------------------------------<
*
*  The additive sequence of an array x is an array y of the same length as x, where each element y[i] = x[0] + x[1] + … + x[i]. (For example, [1,3,8,12,15] is the additive sequence of [1,2,5,4,3].)
*
*  Complete the following function so that it returns 1 if y is the additive sequence of x (where x and y are both integer arrays with the same length n >= 0), and returns 0 otherwise.
*/

// SOLUTION

#include <iostream>

using namespace std;

int checkAddSeq(int *x, int *y, int n) {
  for(int i = 0; i < n; i++) {
	static int sum= 0;
	sum = sum + x[i];
	if (sum != y[i])
      return 0;

  }
  return 1;
}
int main() {
    int n, i;
    int x[10], y[10];
    
    cin >> n;

    for(i=0; i<n; i++)
      cin >> x[i];
    for(i=0; i<n; i++)
      cin >> y[i];
    
    cout << checkAddSeq(x, y, n) << endl;
    return 0;
}
