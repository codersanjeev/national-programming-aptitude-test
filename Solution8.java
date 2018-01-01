/**
*  QUESTION STATEMENT 
*
*  >------------------------------------Most frequent 3 integers---------------------------------------<
*  
*   Complete the following function that finds the three most frequently occurring integers in positions a[0], a[1], ..., a[n-1] of an array. 
*
*	The most frequently occurring integer should be stored in b[0], the next most frequently occurring integer should be stored in b[1], and the next most frequently occurring integers should be stored in b[2]. 
*
*	You can assume that the array contains at least three distinct values, and there are no ties in terms of frequency among the three most frequently occurring elements.
*
*	Note: The rest of the program, which reads the input values, calls your function, and prints the output has already been written for you.
*
*	Hint: Sort the array a[] and find the three biggest blocks.
*/

// SOLUTION
import java.lang.*;
import java.util.*;

public class Solution8 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n, ele;
		System.out.print("Enter the Value of n : ");
		n = sc.nextInt();
		ArrayList<Integer> arr = new ArrayList<Integer>(n);
		for (int i=0; i<n; i++) {
			System.out.print("Enter a["+(i+1)+"] : ");
			ele = sc.nextInt();
			arr.add(ele);
		}
		Collections.sort(arr);
		
		//Finding the Biggest 3 Blocks
		int[] b = new int[3];
		b[0] = 0;
		b[1] = 0;
		b[2] = 0;

		int c, c1=0, c2=0, c3=0;

		for(int i=0; i<n; i++) {
			int temp = arr.get(i);
			if(temp == -1000)
				continue;
			c=1;
			arr.set(i, -1000);
			for(int j=0; j<n; j++){
				if(arr.get(j) == temp){
					c++;
					arr.set(j, -1000);
				}
			}

			if(c > c1){
				c3 = c2;
				b[2] = b[1];
				c2 = c1;
				b[1] = b[0];
				c1 = c;
				b[1] = temp;
			}
			else if(c > c2){
				c3 = c2;
				b[2] = b[1];
				c2 = c;
				b[1] = temp;
			}
			else if(c > c3){
				c3 = c;
				b[2] = temp;
			}
		}

		System.out.println("Most Frequent Integers : "+b[0]+" "+b[1]+" "+b[2]);
		System.out.println("Count of Most Frequent Integers : "+c1+" "+c2+" "+c3);
	}

}