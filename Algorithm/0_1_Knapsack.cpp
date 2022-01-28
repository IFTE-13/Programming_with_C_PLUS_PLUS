#include <iostream>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }


int ks(int W, int weight[], int value[], int n)
{

	if (n == 0 || W == 0)
		return 0;

	if (weight[n - 1] > W)
		return ks(W, weight, value, n - 1);

	else
		return max(
			value[n - 1]
				+ ks(W - weight[n - 1],
						weight, value, n - 1),
			ks(W, weight, value, n - 1));
}

int main()
{
	int value[] = { 10, 20, 30 };
	int weight[] = { 4, 5, 6 };
	int W = 50;
	int n = sizeof(value) / sizeof(value[0]);
	cout << ks(W, weight, value, n);
	return 0;
}

