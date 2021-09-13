#include<bits/stdc++.h>

using namespace std;

int check_py(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else if(a==z){
        b=x;
        c=y;
    }

    if(a*a == (b*b + c*c)){
        return true;
    }
    else    
        return false;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout); 
    #endif

    cout << "Enter a 3 nos to check for Pythagorian Triplet" << endl;
    int x,y,z;
    cin >> x >> y >> z;

    if(check_py(x,y,z)){
        cout << "Pythagorian Triplet" << endl; 
    }
    else
        cout << "Not a Pythagorian Triplet" << endl;

  return 0;
}


