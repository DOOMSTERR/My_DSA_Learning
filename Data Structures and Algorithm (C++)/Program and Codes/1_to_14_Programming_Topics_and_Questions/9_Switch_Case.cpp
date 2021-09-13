#include<iostream>

using namespace std;

int main(){
//Switch-Case statements are substitutes of long if-else statements.
        #ifndef ONLINE_JUDGE
            freopen("Input.txt", "r", stdin);
            freopen("Output.txt", "w", stdout);
        #endif
   
    char button;
    cout <<"Input a character\n";
    cin >>button;

    // if(button='a'){
    //     cout<<"Hello";
    // }
    // else if(button='b'){
    //     cout<<"Ola";
    // }
    // else if(button='c'){
    //     cout<<"Hi";
    // }

    switch (button){
        case 'a':
            cout << "Hello" <<endl;
        break;
        case 'b':
            cout << "Ola" <<endl;
        break;
        case 'c':
            cout << "Hi" <<endl;
        break;
        default:
            cout << "Namaste" <<endl;
        break;
    }
    return 0;
}