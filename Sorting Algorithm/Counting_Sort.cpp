//Counting Sort WIth Out Negative Values
//unfortunately i couldn't able to implement the sort with negative values.
#include<iostream>
using namespace std;

int k = 0;

void sort(int a[], int b[], int n)
{
    int count[k+1], t;
    for(int i = 0; i<=k; i++){
        count[i]= 0;
    }
    for(int i=0; i<n; i++){
        t=a[i];
        count[t]++;
    }
    for(int i=1;i<=k;i++)
	{
		count[i] = count[i]+count[i-1];
	}
	for(int i=0;i<n;i++)
	{
		t = a[i];
		b[count[t]] = t;
		count[t]=count[t]-1;
	}
}

int main()
{
    int n = 5;

	int a[n],b[n];
	cout<<"Enter 5 array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>k)
		{
			k = a[i];
		}
	}

    sort(a,b,n);

    for (int i=1; i<=n; i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
