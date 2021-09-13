#include<iostream>
#include<math.h>

using namespace std;

int isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter 2 nos to find out prime nos between them." << endl;
    int a,b;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}
