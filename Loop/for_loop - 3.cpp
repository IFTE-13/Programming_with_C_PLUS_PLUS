#include<iostream>

using namespace std;

int main()

{
    int A=0,B=3,C=4;
    for(A=3;A>=0;A--)
    {
       do
       {
           C+=3;
           cout<<A<<" "<<B<<" "<<C<<endl;
           B--;
       }
       while(B>0);
    }
}
