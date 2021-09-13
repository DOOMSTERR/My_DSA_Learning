# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

}
