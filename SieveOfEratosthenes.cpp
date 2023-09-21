#include<bits/stdc++.h>
using namespace std;

int Sieve(int n){
    int count = 0;
    vector<bool> isPrime(n+1, true);
    for(int i=2;i<n;i++){
        if(isPrime[i]){
        count++;
    for(int j=2*i;j<n;j=j+i){
        isPrime[j] = false;
    }
        }
    }
    return count;
}

int main()
{
    int num;
    cout<<"enter your number ";
    cin>>num;
    cout<<"count is "<<Sieve(num);
}