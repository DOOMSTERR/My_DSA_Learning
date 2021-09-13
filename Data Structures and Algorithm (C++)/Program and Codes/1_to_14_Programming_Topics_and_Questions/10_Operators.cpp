#include<iostream>

using namespace std;

int main(){

//We will look at Pre/Post incrementation

        #ifndef ONLINE_JUDGE
            freopen("Input.txt", "r", stdin);
            freopen("Output.txt", "w", stdout);
        #endif

    int i=1;
    int a= i;
    cout<< a <<endl;

    int b= i++;
    cout<< b <<endl;
    
    int c= ++i;
    cout<< c <<endl;

}

