#include<iostream>

using namespace std;

int octal_to_decimal(int n){
    int ans = 0;
    int x=1;
    while(n>0){
        int y = n%10;         
        ans = ans + x*y;       
        x=x*8;                
        n=n/10;               
    }
  return ans;
}

int main (){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a octal no to conver it into decimal" << endl;
    int n;
    cin >> n;

    cout << "Conversion of " << n << " is " << octal_to_decimal(n) << endl;

  return 0;
}