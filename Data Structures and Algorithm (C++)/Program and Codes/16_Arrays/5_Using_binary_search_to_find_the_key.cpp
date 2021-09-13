#include<bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int n, int key){     // n here is size of the array.
    int start = 0;      // low
    int end = n;        // high

    // if start and end is equal |or| if start greater than end which is not justifiable then, value not present in array return -1.

    while(start <= end){ 
        int mid = (start + end)/2;      // or mid = start + (end-start)/2

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    } 
    
  return -1;
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

    cout << "Index value of the entered key is " << binary_search(arr, n, key ) <<endl;
    
    // The time complexity of this program is O(n).

  return 0;
}