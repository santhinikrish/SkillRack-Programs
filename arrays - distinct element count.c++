/*input: 4 5
1 5 9 10
22 5 12 9 5
output: 4
*/


#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int k=0,count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]='\0';
                k++;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(b[i]==b[j]){
                b[j]='\0';
                k++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    cout<<(n+m)-k-(count*2);
}