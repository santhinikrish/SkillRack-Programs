/*input: Hi,hello. how are you?
output: INVALID
input: skjr .
output: INVALID
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    scanf("%[^\n]",s);
    int f=0,c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='.' ){
            f++;
        }
        if(s[i]==','){
            c++;
        }
    }
    int n=strlen(s);
    if(f==0 && c==0){
        printf("INVALID");
        return 0;
    }
    for(int i=0;i<n;i++){
        //if(i==n-1 && s[i-1]==' ')
        if(i==n-1 && (s[i]=='.')){
            if(s[i-1]==' '){
                printf("INVALID");
                return 0;
            }else{
                break;
            }
        }
        if(i==n-1 && s[i]==','){
            if(s[i-1]==' '){
                printf("INVALID");
                return 0;
            }
        }
        if(i==0 && s[i]=='.'){
            if(s[i+1]!=' '){
                printf("INVALID");
                return 0;
            }
            if(islower(s[i+2])){
                printf("INVALID");
                return 0;
            }
        }
        if(i==0 && s[i]==','){
            if(s[i+1]!=' '){
                printf("INVALID");
                return 0;
            }
            if(isupper(s[i+2])){
                printf("INVALID");
                return 0;
            }
        }
        if(s[i]=='.'){
            if(s[i-1]==' '){
                printf("INVALID");
                return 0;
            }
            if(s[i+1]!=' '){
                printf("INVALID");
                return 0;
            }
            if(islower(s[i+2])){
                printf("INVALID");
                return 0;
            }
        }
        if(s[i]==','){
            if(s[i-1]==' '){
                printf("INVALID");
                return 0;
            }
            if(s[i+1]!=' '){
                printf("INVALID");
                return 0;
            }
            if(isupper(s[i+2])){
                printf("INVALID");
                return 0;
            }
        }
    }
    printf("VALID");
    return 0;
}