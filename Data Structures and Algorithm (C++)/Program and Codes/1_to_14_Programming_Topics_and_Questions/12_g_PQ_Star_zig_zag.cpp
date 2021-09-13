#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Zig-Zag Pattern" << endl;
    int n;
    cin >> n;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=9; j++){
            if( ( (i+j) % 4 == 0) ||  (i==2 && j % 4==0)){
                cout << "@ ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

  return 0;
}