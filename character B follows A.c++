/*input: malayalam a l
output: 2
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char s[200],c1,c2;
    scanf("%s\n%c\n%c",s,&c1,&c2);
    int c=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c1 && s[i+1]==c2){
            c++;
        }
    }
    printf("%d",c);
}
