#include<iostream>
using namespace std;
int main()
{
    int nums[4] = {-1,-100,3,99};
    int k=2;
    int i=0;
    while(i<4 && k>0){
        swap(nums[i],nums[4-k]);
        i++;
        k--;
    }
    for(int i=0;i<4;i++){
        cout<<nums[i]<<endl;
    }
    
}
    