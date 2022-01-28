#include<iostream>

using namespace std;

int main()

{

int a;
int b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
int x=a++ + --b;
cout<<x<<endl;
cout<<a<<endl;
cout<<b<<endl;
}
