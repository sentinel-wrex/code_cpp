#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<t.size();i++){
        if(s[i]==t[i]){
            continue;
        }
        else if(s[i]!=t[i]){
            return t[i];
            
        }
    }
}