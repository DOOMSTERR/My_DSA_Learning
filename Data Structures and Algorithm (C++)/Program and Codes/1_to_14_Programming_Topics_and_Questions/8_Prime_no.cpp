# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    cout << "Enter a no." << endl;
    int n;
    cin>>n;

    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<n <<" is Non Prime " <<endl;
            break;
        }
    }    
    if(i==n){
        cout<<n <<" is Prime no. " <<endl;
    }

}
