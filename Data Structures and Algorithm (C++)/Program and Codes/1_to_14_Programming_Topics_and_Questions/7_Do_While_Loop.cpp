# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    do{
        cout<< n<< endl;
        cin>>n;
    }while(n>0);
    
    return 0;

}