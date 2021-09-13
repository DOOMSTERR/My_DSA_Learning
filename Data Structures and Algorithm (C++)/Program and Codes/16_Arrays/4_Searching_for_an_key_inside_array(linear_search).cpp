#include<bits/stdc++.h>

using namespace std;


int linear_search(int array[], int key){
    
    for(int i=0; i<sizeof(array); i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;     // if key not found return -1,  i.e. if element is not present.
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    // Given an array say, arr[5] = {8, 15, 20, 7, 4} & search element say key=7 & return its index value.

    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of array" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the value of the key to be searched" << endl;
    int key;
    cin >> key; 

    cout << "Index value of the entered key is " << linear_search(arr, key ) <<endl;
    
    // The time complexity of this program is O(n).

  return 0;
}