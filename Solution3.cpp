/**
*  QUESTION STATEMENT 
*
*  >-----------------Does an integer appear k times in first n positions of an array-------------------<
*
*  Complete the base case of the following recursive function has() so that it works correctly. 
*
*  The function has(a, n, x, k) should return 1 if the integer x appears at least k times in the first n positions of integer array a (i.e., in positions a[0], a[1], ..., a[n-1]). Otherwise, it should return 0. 
*
*  Assume that n and k are non-negative integers and k <= n.
*
*  Therefore:
*  Assuming the array a is [1, 2, 3, 4, 5, 2, 2, 6]
*  and if x=2, k=2, n=8
*  output should be 1 because 2 appears at least 2 times in the first 8 positions.
*  and if x=2, k=2, n=5
*  output should be 0 because 2 does not appear at least 2 times in the first 5 positions.
*/

// SOLUTION

#include < iostream >

using namespace std;

int has(int * a, int n, int x, int k) {
  int count = 0;
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == x)
      count++;
  }
  if (count >= k)
    return 1;
  else
    return 0;

  if (a[n - 1] == x) {
    return has(a, n - 1, x, k - 1);
  } else {
    return has(a, n - 1, x, k);
  }
}
int main() {
  int x, k, n;
  int a[10];
  int i;

  cin >> n;
  cin >> x;
  cin >> k;
  for (i = 0; i < n; i++)
    cin >> a[i];
  cout << has(a, n, x, k) << endl;

  return 0;
}