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

   st1.push(12);
   st1.push(24);
   st1.push(36);
   st1.push(48);
   st1.push(60);
   cout<<"Rushil Kumar, 21BCS4711"<<endl;
   cout<<st1.peek()<<endl;
   
   if(st1.isFull()){
        cout<<"Stack is full"<<endl;
   }

   st1.pop();
   cout<<st1.peek()<<endl;

   if(st1.isEmpty()){
        cout<<"Stack is empty"<<endl;
   }
   
   
   return 0;
}