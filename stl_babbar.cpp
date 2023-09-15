//arrays
#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main(){
    // array<int,5> arr = {0,1,2,3,4};
    // for(int i = 0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }

    // cout<<"array at 3rd index is "<<arr.at(2)<<endl;
    // cout<<"array's first index is "<<arr.front()<<endl;


//vectors
    // vector<int> vec;
    // for(int i=0;i<5;i++){
    //     vec.push_back(i);
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d indexed element is ",i);
    //     cout<<vec.at(i)<<endl;
    // }
    // vec.pop_back();
    // cout<<"last element removed "<<endl;
    // for(int i=0;i<5;i++){
    //     printf("%d indexed element is ",i);
    //     cout<<vec.at(i)<<endl;
    // }

    vector<int> v(5,1);
    for(int i:v){
        cout<<v[i]<<" ";
    } 
}