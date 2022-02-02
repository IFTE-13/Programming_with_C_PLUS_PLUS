#include<iostream>
using namespace std;
int main()
{
    string input = "//This is a comment*/";
    int last = (int)input.size();
    if(input[0] == '/'){
        if(input[1] == '/'){
            cout<<"Comment"<<endl;
        }
        else if(input[1] == '*'){
            if(input[last-1] == '/' && input[last-2] == '*'){
            cout<<"Comment"<<endl;
            }
            else{
            cout<<"Not a comment"<<endl;
            }
        }
        else{
        cout<<"Not a comment"<<endl;
        }
    }
    else{
        cout<<"Not a comment"<<endl;
    }
}
