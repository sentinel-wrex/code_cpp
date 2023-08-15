#include<iostream>
using namespace std;
int main(){
    int arr1[3],arr2[3],counta=0,countb=0;
    cout<<"enter"<<endl;
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<3;i++){
        if(arr1[i]>arr2[i]){
            counta++;
        }
        else if(arr1[i]<arr2[i]){
            countb++;
        }
        else if(arr1[i]==arr2[i]){
            continue;
        }
        
    }
    cout<<counta<<countb<<endl;

}