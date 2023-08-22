#include<iostream>
using namespace std;
int bin(int n)
{
    if (n > 1)
        bin(n / 2);
 
   
    return (n % 2);
}

int setBits(int a, int b){
    cout<<bin(a)<<endl;
    cout<<bin(b);
    
}


int main(){
    int a, b;
    cout<<"enter"<<endl;
    cin>>a>>b;

    setBits(a,b);
    cout<<a<<b<<endl;
}