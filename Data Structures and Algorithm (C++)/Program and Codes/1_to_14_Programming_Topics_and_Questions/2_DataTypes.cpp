#include<iostream>

using namespace std;

int main(){
    int a;
    a=10;
    cout << "Size of int a " << sizeof(a) << endl;
    
    float b;
    cout << "Size of float b " << sizeof(b) << endl;

    char c;
    cout << "Size of char c " << sizeof(c) << endl; 

    bool d;
    cout <<  "Size of bool d " << sizeof(d) << endl;

    short int si;
    long int li;

    cout << "Size of short int " << sizeof(si) << endl;
    cout << "Size of long int " << sizeof(li) << endl;

    return 0;

}

