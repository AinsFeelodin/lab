#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Расчёт функции
* \param x Аргумент функции
* \return Значение функции
**/
double Function(double x);

int main()
{
	const double StepX = 0.05, limit = 1.01;
	double x = 0.4;


	while (x <= limit)
	{
		cout << " Veriable x: " << x << " |" << " Veriable function: " << Function(x) << endl;
		x += StepX;
	}
}

double Function(double x)
{
	return x + sqrt(x) + pow(x, (1.0 / 3.0)) - 2.5;
}