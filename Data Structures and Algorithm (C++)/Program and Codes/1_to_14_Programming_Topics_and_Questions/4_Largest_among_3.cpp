# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int a,b,c;
    cout<< "Enter the value of a,b,c"<< endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
}                      