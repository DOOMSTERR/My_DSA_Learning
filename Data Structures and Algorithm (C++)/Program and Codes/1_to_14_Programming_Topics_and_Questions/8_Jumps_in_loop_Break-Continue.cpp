# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif


    int pocketMoney=3000;

    for(int date=1; date<=30; date++){
        
        if(date%2==0){
            continue; // if exetution hits 'continue' next line will no be executed, will be skipped to next ilteration of the loop.
        }
        if(pocketMoney==0){
            cout<<"No Money"<<endl;

            break;
        }
        cout<<"Go out Today"<<date<<endl;
        cout<<pocketMoney<<endl;
        pocketMoney=pocketMoney-500;
        
    }
}