#include<iostream>
using namespace std;
int power(int num, int pow){
        if(pow==0){
            return 1;
        }
        else if(pow==1){
            return num;
        }
        else if(pow<0){
            cout<<"1/";
            return power(num,-pow);
        }
        int temp = power(num, pow/2);
        if(pow%2==0){
            return (temp*temp);
        }
        else{
            return (temp*temp*num);
        }
    }
int main(){
    int x,y;
    cout<<"Enter your number ";
    cin>>x;
    cout<<"\nEnter your power ";
    cin>>y;
    
    cout<<power(x,y)<<endl;
}



