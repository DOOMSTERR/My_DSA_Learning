#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Floyd's Triangle" << endl;
    int n;
    cin >> n;

    int counter = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
}