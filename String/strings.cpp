#include<iostream>
using namespace std;

void length()
{
    string word = "Programming";
    char set[] = {'P','r','o','g','r','a','m','m','i','n','g','\0'};

    int size = sizeof(set)/sizeof(set[0]);

    cout<<"Length of given word : "<<word.length()<<endl;
    cout<<"Length of given word set : "<<size<<endl;
}

void compare()
{
    string a = "abcd";
    string b = "aBCd";
    string c = "abcd";

    cout<<"Result for a and b : "<<a.compare(b)<<endl;
    cout<<"Result for a and c : "<<a.compare(c)<<endl;
}

int main()
{
    length();
    compare();
}
