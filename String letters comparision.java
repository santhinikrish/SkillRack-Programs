/*input1: 
	read
	dear
output: YES
input2:	
	record
	decoder
output: YES
input3:
	energy
	synergy
output: NO
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        char[] c1=s1.toCharArray();
        char[] c2=s2.toCharArray();
        Set<Character> a=new HashSet<Character>();
        Set<Character> b=new HashSet<Character>();
        for(int i=0;i<s1.length();i++){
            a.add(c1[i]);
        }
        for(int i=0;i<s2.length();i++){
            b.add(c2[i]);
        }
        List<Character> x=new ArrayList<Character>(a);
        List<Character> y=new ArrayList<Character>(b);
        Collections.sort(x);
        Collections.sort(y);
        if(x.equals(y)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
	}
}