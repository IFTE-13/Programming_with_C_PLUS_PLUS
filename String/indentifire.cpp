#include<iostream>
using namespace std;
int main()
{
    string input = "@Abcd";
    char num[10] = {'1','2','3','4','5','6','7','8','9','0'};
    char specialChar[7] = {'!', '@', '#','$','&','%','*'};

    for(int i = 0; i<(int)input.size(); i++){
        if(input[0] == num[i]){
            cout<<"Not a valid identifier for numeric before a char or string"<<endl;
        }
        else if(input[i] == ' '){
            cout<<"Not a valid identifier for space"<<endl;
        }
        for(int j = 0; j<7; j++){
            if(input[i] == specialChar[j]){
            cout<<"Not a valid identifier for special character"<<endl;
            }
        }
    }
}
