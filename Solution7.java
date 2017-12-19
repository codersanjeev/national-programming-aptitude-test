/**
*  QUESTION STATEMENT 
*
*  >------------------------------Printing 2n lines in reverse sequence-------------------------------<
*  
*  Write a program that reads 2n non-blank lines of input (terminated by a blank line), where n is a positive integer. The program should print the last n lines followed by the first n lines last. You can assume that each line is at most 100 characters long. The maximum value of n is not known.
*
*  Example input:
*
*  Line 1
*
*  Line 2
*
*  ...
*
*  Line 2n
*
*  <blank>
*
*
*  Output: given lines of text reordered as follows. 
*
*  Line n+1
*
*  Line n+2
*
*  ...
*
* Line 2n
*
*  Line 1
*
*  Line 2
*
*  ...
*
*  Line n  
*/

// SOLUTION

import java.io.*;
import java.util.*;

public class Solution7 {
 public static void main(String[] args) throws IOException {
  Scanner sc = new Scanner(System.in);
  List < String > text = new ArrayList < String > ();
  String line = null;

  while (!(line = sc.nextLine()).equals("")) {
   text.add(line);
  }
  for (int i = text.size() / 2; i < text.size(); i++) {
   System.out.println(text.get(i));
  }
  for (int i = 0; i < text.size() / 2; i++) {
   System.out.println(text.get(i));
  }
 }
}