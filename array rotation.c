/*input: 5
10 20 30 40 50
output:
30 40 50 10 20
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int i=x-1;
    do{
        printf("%d ",a[i]);
        i=(i+1)%n;
    }while(i!=x-1);
}