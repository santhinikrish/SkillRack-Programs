/*input: bad water
output:
bw
aa
dt
*e
*r
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1),l2=strlen(s2);
    if(l1>l2){
        for(int i=0,j=0;i<l1;i++,j++){
            if(j>=l2){
                printf("%c*\n",s1[i]);
            }else{
                printf("%c%c\n",s1[i],s2[j]);
            }
        }
    }else if(l2>l1){
        for(int i=0,j=0;j<l2;i++,j++){
            if(i>=l1){
                printf("*%c\n",s2[j]);
            }else{
                printf("%c%c\n",s1[i],s2[j]);
            }
        }
    }else{
        for(int i=0,j=0;i<l1,j<l2;i++,j++){
            printf("%c%c\n",s1[i],s2[j]);
        }
    }
}