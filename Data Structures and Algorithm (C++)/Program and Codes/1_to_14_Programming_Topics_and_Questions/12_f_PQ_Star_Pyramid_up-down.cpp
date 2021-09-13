#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Up Down Star Pyramid" << endl;
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout << " @";
        }
        cout << endl;         
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout << " @";
        }
        cout << endl;
    }
    
  return 0;
}