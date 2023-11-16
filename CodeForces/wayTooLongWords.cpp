#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.size()>10){
            int remain = s.size()-2;
            int sizer = s.size();
        
            string temp = s[0]+string(remain)+s[sizer-1];

        }
        else{
            cout<<s<<endl;
        }
    }
}