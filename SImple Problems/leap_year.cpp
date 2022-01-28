#include<iostream>

using namespace std;

int main()

{

int year,rem_4,rem_100,rem_400;
cout<<"LEAP YEAR ? "<<endl;
cout<<"Enter a year to check"<<endl;
cin>>year;

rem_4= year%4;
rem_100 = year%100;
rem_400 = year%400;

if((rem_4==0 && rem_100 !=0) || rem_400==0)
cout<<"It's A Leap Year"<<endl;

else
cout<<"It's NOT A Leap Year"<<endl;

return 0;

}
