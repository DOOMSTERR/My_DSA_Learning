#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Butterfly" << endl;

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "@";
        }
        int _space = 2*n - 2*i;
        for(int j=1; j<=_space; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
        cout << "@";
        }
    cout << endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "@";
        }
        int _space = 2*n - 2*i;
        for(int j=1; j<=_space; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
        cout << "@";
        }
    cout << endl;
    }

    return 0;
}