#include <iostream>
#include <math.h>
using namespace std;
double summ(double eps)
{
	int i = 0;
	double summ = 0;
	do
	{
		summ += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		i++;
	} while (abs(summ) > eps);
	return summ;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ(eps);
}