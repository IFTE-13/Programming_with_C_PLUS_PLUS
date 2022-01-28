#include<iostream>

using namespace std;

int main ()

{

char letter;
cin>>letter;
switch (letter)

{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
cout<<"The letter is vowel"<<endl;

break;

default:
cout<<"The letter is not vowel"<<endl;

}
return 0;


}
