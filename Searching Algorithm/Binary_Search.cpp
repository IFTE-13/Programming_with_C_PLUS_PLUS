#include <iostream>
using namespace std;

int search(int a[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (a[m] == x)
			{
			    return m;
			}
		if (a[m] < x)
			{
			    l = m + 1;
			}
		else
			{
			    r = m - 1;
			}
	}
	return -1;
}

int main(void)
{
	int a[] = {10, 20, 30, 40, 50};
	int x = 10;
	cout <<"Searched for : "<<x<<endl;;
	int n = sizeof(a) / sizeof(a[0]);
	int result = search(a, 0, n - 1, x);
	if(result == -1){
        cout <<"Element is not present in array";
    }
    else{
        cout <<"Element is at index "<<result<<endl;
    }
	return 0;
}
