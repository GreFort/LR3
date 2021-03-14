#include <iostream>
#include <math.h>
using namespace std;
double summ(double eps)
{
	int i = 0;
	double summ = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	while (abs(summ) > eps)
	{
		i++;
		summ += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	}
	return summ;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ(eps);
}