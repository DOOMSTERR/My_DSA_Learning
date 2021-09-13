#include<iostream>

using namespace std;

int decimal_to_binary(int n){
    int ans = 0;
    int x =1;
    while(x<=n)
      x = x * 2;
    x=x/2;
    
    while (x>0){
      int last_digit = n/x;
      n = n - (last_digit *x);
      x= x/2;
      ans = ans*10 + last_digit;
      }
  return ans;
}        


int main (){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a decimal no to conver it into binary" << endl;
    int n;
    cin >> n;

    cout << "Conversion of " << n << " is " << decimal_to_binary(n) << endl;

  return 0;
}