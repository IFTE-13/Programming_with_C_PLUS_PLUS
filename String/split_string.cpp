#include<iostream>
using namespace std;

void split(string str, char speChar){
    string temp = "";
    for(int i = 0; i<(int)str.size(); i++){
        if(str[i] != speChar){
            temp += str[i];
        }
        else{
            cout << temp << ",";
            temp = "";
        }
    }
        cout<<temp;
}

int main()
{
    string x = "20-41980-1";
    string y = "I am Mohammed Iftekhar";


    cout << "Split by hyphen :";
    split(x, '-');
    cout<<endl;
    cout << "Split by space :";
    split(y, ' ');
}
