#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter your row length ";
    cin>>row;
    int col = 0;

    int arr[row][col];

    int temp[1000];
    int *p = temp;
    
    for(int i=0;i<row;i++){
  
        cout<<"Enter your column length ";
        cin>>col;
        temp[i] = col;
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<*(p+j); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}