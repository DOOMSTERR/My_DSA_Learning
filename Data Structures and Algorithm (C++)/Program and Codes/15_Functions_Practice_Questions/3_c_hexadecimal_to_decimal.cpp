#include<bits/stdc++.h>

using namespace std;

int hexadecimal_to_decimal(string n){
    int ans =0;
    int x =1;
    int s = n.size();

    for(int i=s-1; i>=0; i-- ) // s-1 because the element starts from 0 till n-1.
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + x*(n[i]-'0');     // suppose n[i] = 4, so 4-0 = 4.
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + x*(n[i] - 'A' +10);       // suppose n[i] = B, so B-A=1, and 1 + 10 == 11.......so B=11 
        }
        
        x=x*16;
    } 
  return ans;
}

int main (){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a Hexadecimal no to conver it into decimal" << endl;
    string n;              // as hexadecimal takes input as chracters as well so we have take input as string.
    cin >> n;

    cout << "Conversion of " << n << " is " << hexadecimal_to_decimal(n) << endl;

  return 0;
}