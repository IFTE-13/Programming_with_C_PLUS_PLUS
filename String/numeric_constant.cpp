#include<iostream>
using namespace std;
int main()
{
    string input = "3.1416";
    bool flag = true;
    char num[10] = {'1','2','3','4','5','6','7','8','9','0'};
    for(int i = 0; i<(int)input.size(); i++){
           if(isdigit(input[i]) || input[i] == '.'){
            flag = true;
           }
           else{
            flag = false;
           }
    }
    if(flag){
        cout<<"Numeric Constant"<<endl;
    }
    else{
        cout<<"Not a Numeric Constant"<<endl;
    }
}
