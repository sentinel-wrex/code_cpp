#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {10,1,7,6,14,9};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
        
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}