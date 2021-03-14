#include <iostream>
#include <math.h>
using namespace std;
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	}
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}