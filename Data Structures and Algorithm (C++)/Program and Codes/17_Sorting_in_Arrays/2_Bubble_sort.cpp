#include<bits/stdc++.h>

using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif
    
       int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int count =1;
    while(count < n-1){
        for(int i=0; i<(n-count); i++){
            if( arr[i] > arr[i+1] ){
                int temp = arr[i];           
                arr[i] = arr[i+1];            //Swaping them
                arr[i+1] = temp;
            }
        }
        count++;
    }

    cout << "Sorted array is " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " " << endl;
    }

  return 0;
}