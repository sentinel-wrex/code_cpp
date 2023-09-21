#include<iostream>
using namespace std;
char getMaxOccuringChar(string str)
    {
        char max = str[0];
        string emp = "";
        for(int i=0;i<str.length();i++){
            for(int j=i+1;j<str.length();j++){
                if(str[j]==str[i]){
                    max = str[j];
                    emp.push_back(max);
                    
                }
            }
        }
        char maxi = emp[0];
        for(int k=0;k<emp.length();k++){
            if(int(emp[k])<int(emp[k++])){
                maxi = emp[k];
            }
        }
        cout<<maxi;
    }
int main(){
    string s = "DODODODOD";
    getMaxOccuringChar(s);
}