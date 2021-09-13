#include<iostream>
#include<cmath>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a no to check prime." << endl;
    int n;
    cin >> n;

    bool flag=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout << n <<" Non-Prime no." << endl;
            flag = 1;
            break;
        }
    }
    
    if(flag==0){
        cout << n << " Prime no." << endl;

    }

  return 0;
}