#include <iostream>
#include <math.h>
using namespace std;
void print(int n, int k)
{
	double count = 0;
	for (int i = 0; i < n; i++)
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if ((i + 1) % k == 0)
		{
			continue;
		}
		else
		{
			cout << count << " ";
		}
	}
}
void main()
{
	int n,k = 0;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter k = ";
	cin >> k;
	print(n, k);
}