/*input:
5
ouput:
1 6 10 13 15
2 7 11 14
3 8 12
4 9
5*/



#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,x=1,y=1,b=0;
    for(int i=n;i>0;i--){
        int t=n,b=y;
        printf("%d ",y);
        for(int j=1;j<i;j++){
            if(j>0){
                a=a+n-j+b+1;
                printf("%d ",a);
            }
            t--;
            b=0;
        }
        printf("\n");
        y++;
        b=y;
        a=0;
    }
}