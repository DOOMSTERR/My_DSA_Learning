#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int r,c;
    cout<< "Enter the no of rows and colums\n";
    cin>> r >> c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if((i==1 || i==r) || (j==1 || j==c))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}