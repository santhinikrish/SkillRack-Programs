/*input: abcaac
output: 2
input: eoolloooeklkee
output: 4
*/


#include<stdio.h>
#include <stdlib.h>
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 0;
    }
}
int main()
{
    char s[1000];
    scanf("%s",s);
    int c,m=0;
    for(int i=0;i<strlen(s);i++){
        c=0;
        if(isVowel(s[i])==0){
            c++;
        }
        for(int j=i+1;j<strlen(s);j++){
            if(isVowel(s[j])==0){
                c++;
            }else{
                break;
            }
        }
        if(c>m){
            m=c;
        }
    }
    printf("%d",m);
}
