#include<iostream>
using namespace std;

void doublePoint(int **p){
    // p = p + 1 ;
    // cout<<"function ke andar wale ka address 8 age badh gya hoga "<<p<<endl;
    *p = *p + 1;
}

void update(int *a){
    a = a+1;
    cout<<"inside address becomes copy and doesnt get changed "<<a<<endl;
    *a = *a+1;
    cout<<"value can be updated "<<*a;
}

void Point(int *a, int *b){
    cout<<*a+*b<<endl;
}
int main()
{   // !!CONTENT OF POINTER BAKCHODI!!
    int num = 69;
    int *ptr = &num; //ptr ke andar num ka address h
    int **p = &ptr; //p ke andar ptr ka address h, aur ptr ke andar num ka address h, p ke andar num ka address h
    int ***lol = &p; // lol ke andar p ka add h, p ke andar ptr ka add h, ptr ke andar num ka add h, lol -> num add
    
    // cout << "p has "<< p << endl << "*p has "<<*p<<endl;
    
    // char ch = 'R';
    // char *chr = &ch;
    // cout<<"size of integer pointer is "<<sizeof(ptr)<<endl;
    // cout<<"size of character is "<<sizeof(ch)<<endl;
    // cout<<"size of character pointer is "<<sizeof(chr)<<endl;
    
    // !!CONTENT OF POINTER LOGIC!!

    // int i = 5;
    // int *q = &i;
    //                     // These two are the same thing
    // int j = 6;
    // int *q = 0;
    // q = &j;

    // int *r = q; // copying a pointer

    // int arr[10] = {1,69,3};
    // cout<<"Value is "<<*arr+1<<endl;
    
    // cout<<"Value is of bracket "<<*(arr+1)<<endl;

    // // IMPORTANT
    // // arr[i] == *(arr+i) ==
    // // i[arr] == *(i+arr)

    // char *c = "abcde";

    int x = 69;
    int y = 420;
    int *r = &x;
    int *s = &y;
    // cout<<"before "<<r<<endl;
    // update(r);
    // cout<<r<<endl;

    int z = 5;
    int *f = &z;
    int **e = &f;
    cout<<"Before address of double pointer "<< f<<endl;
    cout<<"Before value of double pointer "<<*e<<endl;
    doublePoint(e);
    cout<<"After address of double pointer "<< f<<endl;
    cout<<"After value of double pointer "<<*e<<endl;
}