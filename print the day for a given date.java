/*input1: MON 10
output: WED
input2:FRI 24
output:SUN
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc=new Scanner(System.in);
        String d=sc.nextLine();
        int a=sc.nextInt();
        int r;
        if(d.equals("MON")){
            r=a+0;
        }else if(d.equals("TUE")){
            r=a+1;
        }else if(d.equals("WED")){
            r=a+2;
        }else if(d.equals("THU")){
            r=a+3;
        }else if(d.equals("FRI")){
            r=a+4;
        }else if(d.equals("SAT")){
            r=a+5;
        }else{// if(d.equals("SUN")){
            r=a+6;
        }
        if(r%7==0){
            System.out.print("SUN");
        }else if(r%7==1){
            System.out.print("MON");
        }else if(r%7==2){
            System.out.print("TUE");
        }else if(r%7==3){
            System.out.print("WED");
        }else if(r%7==4){
            System.out.print("THU");
        }else if(r%7==5){
            System.out.print("FRI");
        }else if(r%7==6){
            System.out.print("SAT");
        }
	}
}