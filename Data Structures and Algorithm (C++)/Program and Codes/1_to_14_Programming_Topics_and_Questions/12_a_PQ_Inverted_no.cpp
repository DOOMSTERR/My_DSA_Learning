#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Inverted no. pattern " << endl;
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int k=(n+1)-i;
        for(int j=1; j<=k; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}