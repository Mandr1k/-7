#include <windows.h>
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double amount, size;
	cout << "Введіть кількість учнів =";
	cin >> amount;
	cout << "Введіть розмір шернги =";
	cin >> size;
	int full = amount / size;
	int rest = (int)amount % (int)size;
	cout << full << ;
	cout << rest;
	/*перевірка репозиторіяsdasdawd
	*/
	double x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	double a = (3 * abs(y) - sqrt(pow(x, 3) + 4 * y)) / (10 * x - (y / (pow(z, 3) + (pow(x, 4) / 4))));
	printf("Результат виразу = %lf", a);

	double b = (exp(2) + pow(y, -2) * cos(45) * x) / (5 * x + 1) + sin(pow(x, 2) + y);
	printf("\nРезульs виразу = %lf", b);
}