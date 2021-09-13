#include<bits/stdc++.h>

using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int Max = INT_MIN;
    int Min = INT_MAX;

    for(int i=0; i<n; i++){                                                 
        Max = max(Max, arr[i]);         //  the if statement which cosist of 3 lines Max = arr[i]; { if(arr[i] > max)} is now converted into 1 line.
        Min = min(Min, arr[i]);              
                                        // max(int,int) & min(int,int) functions take 2 int as an input and ommits out the max or min integer out of those 2.
    }

    cout << Max << endl;
    cout << Min << endl;

  return 0;
}