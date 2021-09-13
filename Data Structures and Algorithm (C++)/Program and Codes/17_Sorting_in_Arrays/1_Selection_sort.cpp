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

    for(int i=0; i<n-1; i++){                //elements from 1 to n-1
        for(int j=i+1; j<n; j++){            //elements from i+1 to n
            if( arr[j] > arr[i] ){           //Comparing them
                int temp = arr[j];           //Swaping them
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted array is " << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " " << endl;
    }

  return 0;
}