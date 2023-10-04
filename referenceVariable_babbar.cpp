#include<iostream>
using namespace std;

//  update(int &f){
//     f++;
// }

int main()
{
    // int f = 68;
    // // cout<<"Before function call "<<f;
    // // update(f);
    // // cout<<"After function call "<<f;
    // int *p = new int; // !LEFT MOST PART GETTING ALLOCATED IN STACK WHILE RIGHT PART IS IN HEAP!!
    // *p = 69;
    // *(p+1) = 420;
    // for(int i=0;i<2;i++){
    //     cout<<p[i]<<endl;
    // }

    // //Array creation using Dyanmic memory allocation
    // int *arr = new int[5];
    // for(int i=0;i<4;i++){
    //     cin>>arr[i];
    //     cout<<arr[i];
    // }


    // 2D array creation with dynamic memory allocation
    int row, col;
    cout<<"Enter size"<<endl;
    cin>>row>>col;

    //memory allocation
    int **arr = new int*[row]; // create a row of pointer type arrays
    for(int i=0; i<row; i++){
        arr[i] = new int[col]; // row of pointer type arrays, give them memory
    }

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    //printing
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
}