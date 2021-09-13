#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif


    cout << "Print Rhombus pattern" << endl;
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=5; k++){
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
