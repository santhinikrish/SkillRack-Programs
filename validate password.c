/*input: asdf@123
output: VALID
input: idfk$sms*
output: INVALID
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    scanf("%s",s);
    int l=strlen(s);
    int a=0,d=0,sp=0;
    for(int i=0;i<l;i++){
        if(isdigit(s[i])){
            d++;
        }else if(isalpha(s[i])){
            a++;
        }else{
            sp++;
        }
    }
    if(l>=8 && d>=1 && a>=1 && sp>=1){
        printf("VALID");
    }else{
        printf("INVALID");
    }
}