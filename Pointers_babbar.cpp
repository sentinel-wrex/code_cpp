#include<iostream>
using namespace std;
int main()
{
    // int num = 69;
    // int *ptr = &num; //ptr ke andar num ka address h
    // int **p = &ptr; //p ke andar ptr ka address h, aur ptr ke andar num ka address h, p ke andar num ka address h
    // int ***lol = &p; // lol ke andar p ka add h, p ke andar ptr ka add h, ptr ke andar num ka add h, lol -> num add
    // char ch = 'R';
    // char *chr = &ch;
    // cout<<"size of integer pointer is "<<sizeof(ptr)<<endl;
    // cout<<"size of character is "<<sizeof(ch)<<endl;
    // cout<<"size of character pointer is "<<sizeof(chr)<<endl;
    

    // int i = 5;
    // int *q = &i;
    //                     // These two are the same thing
    // int j = 6;
    // int *q = 0;
    // q = &j;

    // int *r = q; // copying a pointer

    //################################################//

    int arr[10] = {1,69,3};
    cout<<"Value is "<<*arr+1<<endl;
    
    cout<<"Value is of bracket "<<*(arr+1)<<endl;

    // IMPORTANT
    // arr[i] == *(arr+i) ==
    // i[arr] == *(i+arr)
}