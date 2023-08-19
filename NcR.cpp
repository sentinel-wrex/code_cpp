#include<iostream>
using namespace std;

int NcR(int n, int r){
    int factn=1, factr=1, factnr=1, nr = (n-r);
    for(int i=n;i>1;i--){
        factn = factn*i;
    }
    for(int i=r;i>1;i--){
        factr = factr*i;
    }
    for(int i=nr;i>1;i--){
        factnr = factnr*i;
    }
    cout<<factn/(factr*factnr)<<endl;
}



int main()
{
    int N, R;
    cout<<"Enter N then R ";
    cin>>N>>R;

    NcR(N,R);
}