/*input: 5
63 24 35 58 7
3
output:
35 63 7
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],x;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int i=x-1,p=0;
    while(p<n){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
        i--;
        if(i==-1){
            i=n-1;
        }
        p++;
    }
}
