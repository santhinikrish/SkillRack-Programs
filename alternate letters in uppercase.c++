/*input: tREE GIVES us fruiTS
output: TrEe GiVeS Us FrUiTs
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char s[1000];
    int i;
    while(scanf("%s ",s)>0){
        for(i=0;i<strlen(s);i++){
            if(i%2==0){
                printf("%c",toupper(s[i]));
            }else{
                printf("%c",tolower(s[i]));
            }
        }
        printf(" ");
    }
}
