#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=100){
        if(n%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}