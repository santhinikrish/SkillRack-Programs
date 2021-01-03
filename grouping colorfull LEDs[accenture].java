/*
The program must accept the names of the colors in an LED serial set as the input.
The program must find the number of groups of LEDs having the same color at the beginning and the end in the given LED serial set.
Also consider each LED in the given LED serial set as a group.
Finally, the program must print the number of groups of LEDs as the output.

Boundary Condition(s):
1 <= Length of each color's name <= 20

Input Format:
The first line contains a space separated string values representing the names of the colors in an LED serial set.

Output Format:
The first line contains the number of groups LEDs having the same color at the beginning and the end in the given LED serial set.

Example Input/Output 1:
Input:
Red Blue Green Blue
Output: 5
Explanation:
The 5 groups of LEDs are given below.
Red
Blue
Green
Blue
Blue Green Blue

Example Input/Output 2:
Input:
Yellow Red Yellow Green Blue Yellow Green
Output: 11
Explanation:
The 11 groups of LEDs are given below.
Yellow
Red
Yellow
Green
Blue
Yellow
Green
Yellow Red Yellow
Yellow Red Yellow Green Blue Yellow
Yellow Green Blue Yellow
Green Blue Yellow Green
*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        String s[]=sc.nextLine().split(" ");
        int c=0;
        for(int i=0;i<s.length;i++)
        {
            for(int j=i+1;j<s.length;j++)
            {
                if(s[i].equals(s[j]))
                {
                    c++;
                }
            }
        }
        System.out.print(s.length+c);
	}
}
