/*input: debugger@b  buggdeb
output: er@
*/


import java.util.*;
public class Main
{
      public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		String s1=sc.next();
		char c[]=s.toCharArray();
		char ch[]=s1.toCharArray();
		int l=s.length(),l1=s1.length();
		for(int i=0;i<l;i++){
		    for(int j=0;j<l1;j++){
		        if(c[i]==ch[j]){
		            c[i]='*';
		            ch[j]='*';
		            break;
		        }
		    }
		}
		for(int i=0;i<l;i++){
		    if(c[i]!='*'){
		        System.out.print(c[i]);
		    }
		}
	}
}
