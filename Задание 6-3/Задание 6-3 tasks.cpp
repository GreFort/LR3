#include <iostream>
#include <math.h>
using namespace std;
double summ1(int count)
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
void task1()
{
	int count;
	cout << "Enter count = ";
	cin >> count;
	cout << "Fuction summ = " << summ1(count);
}
double summ2(double eps)
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
void task2()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ2(eps);
}
void print(int n, int k)
{
	double count = 0;
	int i = 0;
	do
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if ((i + 1) % k == 0)
		{
			i++;
			continue;
		}
		else
		{
			cout << count << " ";
		}
		i++;
	} while (i < n);
}
void task3()
{
	int n, k = 0;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter k = ";
	cin >> k;
	print(n, k);
}
int findFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	do
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		i++;
		if (abs(count) < eps)
		{
			break;
		}
	} while (true);
	return i;
}
void task4()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstElement(eps);
}
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double count = 0;
	do
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	} while (true);
}
void task5()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}
