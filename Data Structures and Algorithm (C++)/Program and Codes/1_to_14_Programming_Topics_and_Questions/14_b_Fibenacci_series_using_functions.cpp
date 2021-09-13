#include<iostream>
#include<math.h>

using namespace std;

void fib(int num){
    int t1=0;
    int t2=1;
    int next_term=0;
            
    for(int i=1; i<=num; i++){
        cout << t1 << " ";
        next_term = t1+t2;
        t1=t2;
        t2=next_term;    
    }
    return;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "enter a no till which fib series is to be generated" << endl;
    int n;
    cin >> n;
    fib(n);

  return 0;
}
