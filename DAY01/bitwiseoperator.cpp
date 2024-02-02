#include<iostream>
using namespace std;

int main(){

    int a;
    int b;

    cout<<"enter your first number:";
    cin>>a;
    cout<<"enter your second number:";
    cin>>b;

    cout<<" a&b "<< (a&b)<<endl;
    cout<<" a|b "<< (a|b)<<endl;
    cout<<" a^b "<< (a^b)<<endl;
    cout<<" ~a "<< (~a)<<endl;
    cout<<" ~b "<< (~b)<<endl;
    

    return 0;
}