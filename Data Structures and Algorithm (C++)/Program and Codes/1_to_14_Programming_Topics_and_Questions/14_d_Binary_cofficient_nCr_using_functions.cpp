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

    cout << "Enter the value of n and r to calculate nCr" << endl;
    int n,r;
    cin >> n >> r;  
    int ans = binary(n,r);
    cout << "nCr calculated is " << ans << endl;
}

/* 
Anothe r way to do it is  by simply using this line in main function at bottom,

    int ans = fact(n) / fact(r) * fact(n-r);
    cout << "nCr calculated is " << ans << endl; 

and simply remove the additional binary function created on top.

*/ 