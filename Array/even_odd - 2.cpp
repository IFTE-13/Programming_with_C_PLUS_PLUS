#include <iostream>
using namespace std;
int main(){
    int num[10] = {12,32,43,1,54,53,15,64,3,13};

    for(int i = 0; i<10; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    for(int j = 9; j>=0; j--){
        cout<<num[j]<<" ";
    }
    cout<<endl;

    int x = 0, y =0;
    for(int i = 0; i<10; i++){
        if(num[i]%2 == 0){

            x++;
        }
        if(num[i]%2 == 1){
            y++;
        }
    }
        cout<<y<<" odd numbers"<<endl;
        cout<<x<<" even numbers"<<endl;
}
