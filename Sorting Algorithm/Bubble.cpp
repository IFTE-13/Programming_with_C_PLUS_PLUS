#include<iostream>
using namespace std;

int main()
{
int n = 5,i,j,x;
int a[n] = {40, 10, 30, 50, 20};

for(i=1;i<n;++i)
{
for(j=0;j<(n-i);++j)
if(a[j]>a[j+1])
{
x=a[j];
a[j]=a[j+1];
a[j+1]=x;
}
}
cout<<"Sorted array in ascending order:\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
return 0;
}
