# include<iostream>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

    float n1,n2;
    cout<< "Enter 2 no." <<endl;
    cin>>n1>>n2;

    char operate;
    cout << "Enter the operation" <<endl;
    cin >> operate;

    switch (operate)
    {
    case '+':
        cout <<"Sum is " << n1+n2;
        break;
    case '-':
        cout <<"Difference is " << n1-n2;
        break;
    case '*':
        cout <<"Multiplication is " << n1*n2;
        break;
    case '/':
        cout <<"Division is " << n1/n2;
        break;
    default:
        cout <<"Invalid";
        break;
    }


    return 0;
}