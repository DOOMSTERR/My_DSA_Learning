# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if (savings>5000){
        if(savings>10000){
            cout<<"Trip with Neha";
        }
        else{
            cout<<"Mall with Neha";
        }
    } 
    else if(savings>2000){
        cout<<"Rashmi";
    } 
    else{
        cout<<"Friends";
    }
}