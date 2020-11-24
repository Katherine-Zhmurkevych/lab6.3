//ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void сreate(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int amount(int* a, const int size)
{
	int am = 0;
	for (int i = 0; i < size; i++)
		if (a[i] >0)
			am++;
	return am;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 23;
	int a[n];
	int Low = -100;
	int High = 100;
	сreate(a, n, Low, High);
	print(a, n);
	cout << "amount of x>=0 is " << amount(a, n);
	return 0;
}