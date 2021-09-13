# include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;


    int sum=0;
    for(int count=1; count<=n; count++){
        sum=sum+count;
        cout<<sum<<endl;
    }

}
