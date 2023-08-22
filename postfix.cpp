#include<iostream>
using namespace std;
class stack{
    public:
    int size, *arr, top;
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }  
    void push(int top, int element){
        if( size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Overflow";
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Underflow";
        }
    }
};



int main ()
{
    string expression[1000];
    for(int i=0;i<5;i++){
        cin>>expression[i];
    }
    cout<<"Outputting";
    for(int i=0;i<1000;i++){
        cout<<expression[i];
    }    

}    