#include <iostream>
#include <math.h>
using namespace std;
int findFirstElement(double eps)
{
	int i;
	double count = 0;
	for (i = 0; ; i++)
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (abs(count) < eps)
		{
			break;
		}
	}
	return i+1;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstElement(eps);
}