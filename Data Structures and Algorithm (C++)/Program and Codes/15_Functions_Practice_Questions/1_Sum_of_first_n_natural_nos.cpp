#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sum_natural(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){     //      
        sum += i;                  // sum = (num*(num+1))/2;   can use for loop or simply formula (n(n+1))/2
    }                              //
  return sum;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter the no 'N' till where sum it to be calculated" << endl;
    int n;
    cin >> n;

    cout << "The sum is " << sum_natural(n) << endl;
  
  return 0;
}