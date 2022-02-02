#include<iostream>
using namespace std;
int main()
{
    string input = "a+b-c*d/f";
    string found = "";
    char ope[5] = {'+','-','*','/','%'};
    for(int i = 0; i<5; i++){
        for(int j = 0; j<(int)input.size(); j++){
            if(ope[i] == input[j]){
               found += ope[i];
            }
        }
    }
    cout<< "Found operator/s in the given input string: " <<found <<endl;
}

