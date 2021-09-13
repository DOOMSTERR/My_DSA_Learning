# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<"Sum is " <<sum;
}
