/*intput: LEMON
output: 
LEMON
EMONL
MONLE
ONLEM
NLEMO
LEMON
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        for(int j=i;j<i+l;j++){
            printf("%c",s[j%l]);
        }
        printf("\n");
    }
    printf("%s",s);
}