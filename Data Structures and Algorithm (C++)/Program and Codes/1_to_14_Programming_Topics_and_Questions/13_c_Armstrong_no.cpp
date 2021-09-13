#include<iostream>
#include<math.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif
   
    // Logic behind armstrong no. ---> say 153 = 1 cube + 5 cube + 3 cube = 153 is anamstrong no.

    cout << "Check if the given no is armstrong or not" << endl;
    int n;
    cin >> n;
    cout << n << endl;


    int arms, sum=0, last_digit;
    int initial_n = n;


    while(n>0){
        last_digit = n%10;
        arms = last_digit * last_digit * last_digit;
        sum = sum + arms;
        // here for sum we can also write the value of sum as 
        // sum = pow(last_digit, 3)                 pow uses math.h
        n=n/10;
    }

    if(initial_n==sum){
        cout << " is Armstrong no.";
    }
    else
        cout << " is Not-Armstrong no.";

  return 0;
}