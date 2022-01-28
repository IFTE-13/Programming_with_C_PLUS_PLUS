#include <iostream>
using namespace std;
int main(){

    int num[10] = {12,32,43,1,54,53,15,64,3,13};

    //avg of an array
    int total = 0; float avg = 0;
    for(int i = 0; i<10; i++){
        total += num[i];
    }

    avg = total/10;
    cout<<avg<<endl;

}

