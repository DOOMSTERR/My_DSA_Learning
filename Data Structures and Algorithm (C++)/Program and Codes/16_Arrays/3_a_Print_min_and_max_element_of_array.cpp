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
    cout << "enter the elements of the array" << endl;

    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    int maximum = INT_MIN;     // These two elements contains the min and max values possible of a integer stored inside c++.
    int minimum = INT_MAX;

    cout << minimum << maximum << endl;

    for(int i=0; i<n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }

    cout << "Highest element of an array is " << maximum << endl;

    cout << "Lowest element of an array is " << minimum << endl;

  return 0;
}