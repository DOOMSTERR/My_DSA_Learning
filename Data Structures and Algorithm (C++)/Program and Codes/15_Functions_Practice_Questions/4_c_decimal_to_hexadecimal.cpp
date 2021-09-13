#include<iostream>

using namespace std;

// here input will be in int but  output will be in string due to ABCDEF. 

string decimal_to_hexadecimal(int n){
    int x=1;
    string ans ="";
    while(x<=n)
        x= x * 16;
    x = x / 16;

    while(x>0){
        int last_digit = n/x;
        n = n - (last_digit *x);
        x= x/16;
        if(last_digit <= 9){
            ans = ans + to_string(last_digit);
        }
        else{
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    } 
  return ans;
}


int main (){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a decimal no to conver it into hexadecimal" << endl;
    int n;
    cin >> n;

    cout << "Conversion of " << n << " is " << decimal_to_hexadecimal(n) << endl;

  return 0;
}