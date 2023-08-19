#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){              //passing size
        this -> size = size;        //
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }
        else{
            return false;
        }
    }
    int peek(){
        if(top >= 0){
            
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
};
int main(){
   stack st1(5);
   st1.push(3);
   st1.push(2);
   st1.push(1);
   st1.push(1);
   st1.push(1);

   stack st2(3);
   st2.push(4);
   st2.push(3);
   st2.push(2);

   stack st3(4);
   st3.push(1);
   st3.push(1);
   st3.push(4);
   st3.push(1);
   
   
   
   return 0;
}