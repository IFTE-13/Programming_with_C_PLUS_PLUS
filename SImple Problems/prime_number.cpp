#include <iostream>
using namespace std;
int main(){
    bool prime = true;
    int factorial = 1;
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x == 0 || x == 1){
        cout<<"Error! Not a prime Number"<<endl;
    }
    else{
        for(int i = 2; i < x; i++){
            if(x%i == 0){
                prime = false;
            }
        }
    }

    if(prime){
        cout<<x<<" is a prime number"<<endl;
        for(int i = 1; i <= x; i++){
            factorial *= i;
        }
            cout<<factorial;
    }
    else{
        cout<<"Error! Not a prime Number"<<endl;
    }
}

