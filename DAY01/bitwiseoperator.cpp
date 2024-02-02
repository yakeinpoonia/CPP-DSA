#include<iostream>
using namespace std;

int main(){

    int a=4;
    int b=6;

    // These are the examples of AND,OR,NOT and XOR 
    cout<<" a&b "<< (a&b)<<endl;
    cout<<" a|b "<< (a|b)<<endl;
    cout<<" a^b "<< (a^b)<<endl;
    cout<<" ~a "<< (~a)<<endl;
    cout<<" ~b "<< (~b)<<endl;


    // These are the examples of left and right shifts
    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;


    // Pre-increatment and Post-increatment
    cout<< (a++) << endl;
    cout<< (++a) << endl;
    cout<< (a--) << endl;
    cout<< (--a) << endl;

    return 0;
}