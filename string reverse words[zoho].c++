/*input: today is friday
output: friday is today
*/


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char s[100][100];
    int i=0;
    while(scanf("%s ",&s[i])>0){
        i++;
    }
    int len=i;
    for(int j=len-1;j>=0;j--){
        printf("%s ",s[j]);
    }
}