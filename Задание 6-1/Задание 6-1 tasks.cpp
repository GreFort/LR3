#include <iostream>
#include <math.h>
using namespace std;
double summ1(int count)
{
	double summ = 0;
	for (int i = 0; i <= count; i++)
	{
		summ += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	}
	return summ;
}
void task1()
{
	int count;
	cout << "Enter count = ";
	cin >> count;
	cout << "Function summ = " << summ1(count);
}
double summ2(double eps)
{
	int i = 0;
	double summ = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	for (i = 1; abs(summ) > eps; i++)
	{
		summ += pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	}
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
	return i + 1;
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
	int i;
	double count = 0;
	for (i = 0; ; i++)
	{
		count = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (abs(count) < eps && count < 0)
		{
			return i + 1;
		}
	}
}
void task5()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}