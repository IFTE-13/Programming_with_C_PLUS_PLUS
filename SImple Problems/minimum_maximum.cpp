#include<iostream>

using namespace std;

int main ()
{
float a,b,c;
cout<<"Let's code cause coding is fun"<<endl;
cout<<"Enter 3 Number"<<endl;
cin>>a>>b>>c;

if(a>b && a>c)
cout<<"The Maximum Number is:"<<a<<endl;

else if(b>a && b>c)
cout<<"The Maximum Number is:"<<b<<endl;

else if(c>a && c>b)
cout<<"The Maximum Number is:"<<c<<endl;

if(a<b && a<c)
cout<<"The Minimum Number is:"<<a<<endl;

else if(b<a && b<c)
cout<<"The Miniimum Number is:"<<b<<endl;

else if(c<a && c<b)
cout<<"The Minimum Number is:"<<c<<endl;

 if (a==b && a==c)
cout<<"The numbers are same.Try 3 different numbers "<<a<<endl;


return 0;

}
