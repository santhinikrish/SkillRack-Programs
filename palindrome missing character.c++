/*input: malayaam
output: l
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    //cin>>s;
    getline(cin,s);
    int i=0,l=s.length();
    while(i<l){
        if(s[i]!=s[l]){
            if(s[i]==s[l-1]&& i!=l-1){
                cout<<s[l];
                break;
            }else{
                cout<<s[i];
                break;
            }
        }
        l--;
        i++;
    }
}