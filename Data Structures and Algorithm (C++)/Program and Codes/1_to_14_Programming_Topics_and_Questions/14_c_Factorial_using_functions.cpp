#include<iostream>
#include<math.h>

using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial = factorial * i;
    }
  return factorial;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter the no. whose factorial is to be calculated" << endl;
    int n;
    cin >> n;
    fact(n);
    cout << "Factorial of " << n << " is " << fact(n) << endl;

}