#include<iostream>
using namespace std;

int t_coin(int coins[], int m, int V)
{

if (V == 0) return 0;

int res = INT_MAX;

for (int i=0; i<m; i++)
{
	if (coins[i] <= V)
	{
		int sub_res = t_coin(coins, m, V-coins[i]);

		if (sub_res != INT_MAX && sub_res + 1 < res)
			res = sub_res + 1;
	}
}
return res;
}

int main()
{
	int coins[] = {10, 5, 2, 1};
	int m = sizeof(coins)/sizeof(coins[0]);
	int V = 33;
	cout << "Minimum coins required is : "<< t_coin(coins, m, V)<<endl;
	return 0;
}
