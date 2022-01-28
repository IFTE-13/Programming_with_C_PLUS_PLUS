#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int n = 5;
    int a[n] = {40, 10, 30, 50, 20};
    for(i=0;i<n-1;i++)
    {
        int min=a[i];
        int x=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                x=j;
            }
        }
        int y=a[i];
        a[i]=a[x];
        a[x]=y;
    }
    cout<<"Sorted array in ascending order:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
