/*input: acegjdbmprtzdsvx
output: bmprtz
input: airport
output: air
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    int f,la,m=0;
    for(int i=0;i<l;i++){
        int k=i,t=k+1,c=1;
        while(s[k]<=s[t]){
            c++;
            k++;
            t++;
        }
        if(c>m){
            m=c;
            f=i;
            la=t;
        }
    }
    for(int i=f;i<la;i++){
        printf("%c",s[i]);
    }
}
