#include <iostream>
#include <math.h>
using namespace std;
double summ(int count)
{
	double summ = 0;
	int i = 0;
	do
	{
		summ += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		i++;
	} while (i <= count);
	return summ;
}
void main()
{
	int count;
	cout << "Enter count = ";
	cin >> count;
	cout << "Fuction summ = " << summ(count);
}