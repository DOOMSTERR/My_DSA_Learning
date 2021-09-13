#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int n;
    cout<< "Enter the size of the pyramid \n";
    cin>> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
                
                cout<<"*";
            }
        cout<< endl;
        }
}