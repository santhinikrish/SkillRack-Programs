//input:bridge,gear and midnigth,daymid
//output:        ge and  mid


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s\n%s",s1,s2);
    int l=strlen(s1);
    int c1=l-1;
    int c2=0;
    while(c1>=0){
        if(s1[c1]!=s2[c2]){
            c2++;
        }else{
            if(s1[c1-1]==s2[c2]){
                c1--;
                c2++;
            }else{
                break;
            }
        }
    }
    for(int r=0;r<=c2;r++){
        printf("%c",s2[r]);
    }
}
