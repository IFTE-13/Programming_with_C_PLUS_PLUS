#include<iostream>
using namespace std;

int main()
{
int n = 5,x,i,result=0;
int a[n] = {40, 10, 30, 50, 20};

cout<<"Enter element to search:";
cin>>x;
for(i=0;i<n;++i)
{
    if(a[i]==x)
        {
            result=1;
            break;
        }
}
if(result)
{
    cout<<"\nElement is found at position "<<i+1<<endl;
}
else
{
    cout<<"\nElement not found"<<endl;
}
return 0;
}
