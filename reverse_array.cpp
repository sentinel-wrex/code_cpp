#include<iostream>
using namespace std;

int main(){
    int N,arr[N];
    cout<<"enter";
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int j=N-1;j>=0;j--){
        cout<<arr[j];
    }
}
