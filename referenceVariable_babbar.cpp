#include<iostream>
using namespace std;

//  update(int &f){
//     f++;
// }

int main()
{
    int f = 68;
    // cout<<"Before function call "<<f;
    // update(f);
    // cout<<"After function call "<<f;
    int *p = new int; // !LEFT MOST PART GETTING ALLOCATED IN STACK WHILE RIGHT PART IS IN HEAP!!
    *p = 69;
    *(p+1) = 420;
    for(int i=0;i<2;i++){
        cout<<p[i]<<endl;
    }

    //Array creation using heap memory
    int *arr = new int[5];
    for(int i=0;i<4;i++){
        cin>>arr[i];
        cout<<arr[i];
    }
}