#include<iostream>
#include<cmath>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a no to be reversed" << endl;
    int n;
    cin >> n;
    cout << n << endl;;

    int last_digit, rev = 0 ;
    while(n>0){
        last_digit = n%10;
        rev = rev*10 + last_digit;
        n=n/10;
    }

    cout << "Reversed no. is  " << rev << endl;

  return 0;
}