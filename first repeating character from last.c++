/*input: abcdexyzbwqpooplj
output: p
*/


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char ba='*',s[100];
    scanf("%[^\n]",s);
    int l=strlen(s);
    for(int i=l-1;i>=0;i--){
        for(int j=1;j<i;j++){
            if(s[i]==s[j]){
                printf("%c",s[j]);
                ba='a';
                break;
            }
        }
        if(ba=='a'){
            break;
        }
    }
}
