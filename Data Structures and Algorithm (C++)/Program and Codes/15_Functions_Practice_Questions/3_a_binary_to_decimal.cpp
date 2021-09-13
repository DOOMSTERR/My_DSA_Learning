#include<iostream>

using namespace std;

int binary_to_decimal(int n){
    int ans = 0;
    int x=1;
    while(n>0){
        int y = n%10;         // will give last digit of decimal
        ans = ans + x*y;      // sum = 0 + last digit * (2 pow 0)        {(2 pow 0) = 1} 
        x=x*2;                // Incremented pow from  0 -> 1  {(2 pow 0 = 1), (2 pow 1 = 2), 4 , 8, 16.......}
        n=n/10;               // Removing last digit from n completly.
    }
  return ans;
}

int main (){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a binary no to conver it into decimal" << endl;
    int n;
    cin >> n;

    cout << "Conversion of " << n << " is " << binary_to_decimal(n) << endl;

  return 0;
}