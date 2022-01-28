#include<iostream>

using namespace std;

int sum (int a,int b) //retuen type-function name(aurgument/perameter)
{
   int sum=a+b;
   return sum; //return value or variables
}
int sub (int a,int b)
{
   int sub=a-b;
   return sub;
}
int mul (int a,int b)
{
   int mul=a*b;
   return mul;
}
int div (int a,int b)
{
   int div=a/b;
   return div;
}
int max(int a,int b)
{
    if(a>b)
         return a;
    else
        return b;
}
int mini(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
main()
{
    cout<<sum(20,10)<<endl;
    cout<<sub(100,20)<<endl;
    cout<<mul(10,20)<<endl;
    cout<<div(10,20)<<endl;
    cout<<max(10,20)<<endl;
    cout<<mini(10,20)<<endl;
}
