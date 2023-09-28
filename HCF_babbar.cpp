#include<iostream>
using namespace std;

int HCF(int n, int m){
    while(m!=n){
        if(m>n){
            m = m - n;
        }
        else{
            n = n-m;
        }
    }
    return m;
}

int main()
{
    //HCF or GCD
    cout<<"Enter your number you want to find the HCF of ";
    int a,b;
    cin>>a>>b;
    cout<<"HCF is "<<HCF(a,b)<<endl;

}