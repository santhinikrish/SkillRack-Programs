/*input: 
3
there is nothing permanent except change
output:
there is nothing change except permanent
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[50][100];
    int i=0,k;
    scanf("%d\n",&k);
    while(scanf("%s",&s[i])>0){
        i++;
    }
    int n=i;
    for(int j=0;j<n-k;j++){
        printf("%s ",s[j]);
    }
    i=n-1;
    while(k--){
        printf("%s ",s[i--]);
    }
}