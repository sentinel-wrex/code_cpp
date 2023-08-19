#include<iostream>
using namespace std;
int sumArray(int arr1[], int arr2[], int size){ // adds two arrays elements by their respective index
        cout<<"Cooking"<<endl;
        int sum = 0;
        for(int i=0;i<size;i++){
            printf("%d index sum is ",i);
            cout<<arr1[i]+arr2[i]<<endl;
        }
    }
int main(){

    

    int rus[5] = {1,2,3,4,5};
    int kum[5] = {1,2,3,4,5};

    sumArray(rus, kum, 5);





}