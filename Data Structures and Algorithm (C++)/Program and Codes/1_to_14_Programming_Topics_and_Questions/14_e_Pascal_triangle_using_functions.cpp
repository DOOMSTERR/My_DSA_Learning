#include<iostream>

using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i;
    }
  return factorial;
}

int binary(int n,int r){
    int bin;
    bin = fact(n) / (fact(r) * fact(n-r)); // take care of the bracket here or answer will change.
  return bin;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter the value of n for printing Pascals Triangle" << endl;
    
    // 1 
    // 1 1
    // 1 2 1 
    // 1 3 3 1 
    // 1 4 6 4 1

    int n;
    cin >> n;

    for (int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << binary(i,j) << " ";
        }
    cout << endl;
    }
    
  return 0;
}