#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //base
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){ // for asc
        return false;
    }

    //process
    int ans = isSorted(arr+1, n-1);
    return ans;
}




int main()
{
    int lol[5] = {1,2,3,4,5};
    int size = 5;
    bool temp = isSorted(lol,size);
    cout<<temp<<endl;
}