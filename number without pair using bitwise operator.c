/*input: 5
44 54 88 44 54
output:
88
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,w,c;
    scanf("%d %d",&n,&w);
    for(int i=2;i<=n;i++){
        scanf("%d",&c);
        w^=c;
    }
    printf("%d",w);
}
