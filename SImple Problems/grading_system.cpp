#include<iostream>

using namespace std;

int main ()

{

float a;
cout<<"Welcome to Aiub Grading System"<<endl;
cout<<"Enter Your Marks"<<endl;
cin>>a;

if (a>=90 && a<=100)
cout<<"Your Grade is A+"<<endl;

else if (a>=85 && a<=89.99)
cout<<"Your Grade is A"<<endl;

else if (a>=80 && a<=84.99)
cout<<"Your Grade is B+"<<endl;

else if (a>=75 && a<=79.99)
cout<<"Your Grade is B"<<endl;

else if (a>=70 && a<=74.99)
cout<<"Your Grade is C+"<<endl;

else if (a>=65 && a<=69.99)
cout<<"Your Grade is C"<<endl;

else if (a>=60 && a<=64.99)
cout<<"Your Grade is D+"<<endl;

else if (a>=50 && a<=59.99)
cout<<"Your Grade is D"<<endl;

else if (a>=0 && a<=49.99)
cout<<"Your Grade is F"<<endl;

else if(a<0 || a>100)
cout<<"Invalid Number Please Try Again"<<endl;

return 0;

}
