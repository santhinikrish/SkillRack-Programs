/*input:3
10 300
20 550
15 460
output: 3
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int d,p,in,i=0;
    float m=0.0;
    while(scanf("%d %d",&d,&p)>0){
        float f=p/d;
        if(f>m){
            m=f;
            in=i+1;
        }
        i++;
    }
    cout<<in;
}
