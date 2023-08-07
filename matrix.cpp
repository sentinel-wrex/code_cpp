#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                cout<<i<<j<<endl;
                for(int j=0;j<3;j++){
                    arr[i][j]=0;
                }
                
            }
            cout<<arr[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    
}