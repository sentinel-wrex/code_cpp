#include<iostream>
using namespace std;
int main(){
    int size,num[size],target;
    cout<<"size";
    cin>>size;
    cout<<"target";
    cin>>target;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if((num[i]+num[j])==target){
                cout<<i<<j<<endl;
            }
        }
    }
}