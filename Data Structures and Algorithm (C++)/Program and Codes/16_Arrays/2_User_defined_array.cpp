#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int n;
    cout << "Enter the sie of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;

    for(int i=0;i<=n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n; i++){
        cout << arr[i];
    }

  return 0;
}