#include <iostream>
#include <algorithm>
using namespace std;

struct product {
	int value, weight;

	product(int value, int weight)
		: value(value), weight(weight)
	{
	}
};

bool x(struct product a, struct product b)
{
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;
	return r1 > r2;
}

double fractionalKnapsack(struct product arr[],
						int N, int size)
{
	sort(arr, arr + size, x);

	int curWeight = 0;

	double finalvalue = 0.0;

	for (int i = 0; i < size; i++) {

		if (curWeight + arr[i].weight <= N) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}

		else {
			int remain = N - curWeight;
			finalvalue += arr[i].value
						* ((double)remain
							/ arr[i].weight);

			break;
		}
	}

	return finalvalue;
}


int main()
{
	int N = 8;

	product arr[] = {
				{ 5, 4 },
				{ 3, 2 },
				{ 7, 5 },
				{ 3, 3 },
				{
				    2, 1
				}
				};

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Maximum Profit Earned = "
		<< fractionalKnapsack(arr, N, size)<<endl;
	return 0;
}
