/**
*  QUESTION STATEMENT 
*
*  >-------------------------------------Triangle inequality------------------------------------------<
*
*  The following function takes three positive integer arguments a, b, c representing the sides of a triangle (hence, these integers satisfy the triangle inequality). The function should return 3 if the triangle is equilateral, it should return 2 if the triangle is isosceles but not equilateral, and it should return 1 otherwise. Identify values a, b, c for which the given function does NOT work.
*
*  int triangleType(int a, int b, int c) {
*    if(a != b && b != c)
*      return 1;
*    else if(a == b && a == c)
*      return 3;
*    else
*     return 2;
*  }
*
*  Open up the code submission box below and write your test case where you would normally enter your code. Your input should be in the form:
*  a, b, c
*  where a, b and c are all positive integers.
*/

// SOLUTION

#include <stdio.h>

int num[3]={
2,3,2
};

int triangleType_bad(int a, int b, int c) {
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}

int triangleType_good(int a, int b, int c) {
  if((a == c) && (b != a) && (a <= b+c) && (b <= a+c) && (c <= a+b))
    return 0;
    
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}


int main() {
    
    if(triangleType_bad(num[0], num[1], num[2]) != triangleType_good(num[0], num[1], num[2]))
        printf("correct\n");
    else
        printf("wrong\n");
   
    return 0;
}