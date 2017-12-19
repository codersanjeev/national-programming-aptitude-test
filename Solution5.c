/**
*  QUESTION STATEMENT 
*
*  >-----------------------------Largest sum of m consecutive elements---------------------------------<
*
*  Complete the following function so that it returns the largest sum of m consecutive elements in an array of size n. You can assume that 0 <= m <= n.
*
*  Therefore, assuming the array is [8 2 0 5 6 7 1 2 3]
*  if m = 2, largest sum will be 13 (6 + 7)
*  if m = 5, largest sum will be 21 (8 + 2 + 0 + 5 + 6)
*/

// SOLUTION

#include <stdio.h>

int maxConsecutive(int *a, int n, int m) {
  int sum = 0;
  for(int i = 0; i < m; i++) {
    sum += a[i];
  }
  int max = sum;
  for(int i = m; i < n; i++) {
	sum = sum + a[i] - a[m-i];
	if (sum > max)
      max = sum;
  }
  return max;
}
int main() {
    int n, m;
    int a[10];
    int i;
    
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d\n", maxConsecutive(a, n, m));
    
    return 0;
}
