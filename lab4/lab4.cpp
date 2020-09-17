
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, s, p, d;
	float l, a1, b1, a2, b2, a3, b3;
	const float pi = 3.14;
	cout << "1)введите стороны прямоугольника a и b" << endl;
	cin >> a >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "площать прямоугольника:" << s << endl;
	cout << "периметр прямоугольника:" << p << endl;
	cout << "2)введите диаметр окружности d" << endl;
	cin >> d;
	l = pi * d;
	cout << "диаметр окружности" << l << endl;
	cout << "3)введите два числа a и b" << endl;
	cin >> a1 >> b1;
	cout << "среднее арифметическое a1 и b1: " << (a1 + b1) / 2 << endl;
	cout << "4)введите два числа a2 и b2" << endl;
	cin >> a2 >> b2;
	cout << "сумма квадратов a2 и b2: " << pow(a2, 2) + pow(b2, 2) << endl;
	cout << "разность квадратов a2 и b2: " << pow(a2, 2) - pow(b2, 2) << endl;
	cout << "произведение квадратов a2 и b2: " << pow(a2, 2) * pow(b2, 2) << endl;
	cout << "частное квадратов a2 и b2: " << pow(a2, 2) / pow(b2, 2) << endl;
	cout << "5)введите два числа a3 и b3" << endl;
	cin >> a3 >> b3;
	cout << "сумма модулей a3 и b3: " << abs(a3) + abs(b3) << endl;
	cout << "разность модулей a3 и b3: " << abs(a3) - abs(b3) << endl;
	cout << "произведение модулей a3 и b3: " << abs(a3) * abs(b3) << endl;
	cout << "частное модулей a3 и b3: " << abs(a3) / abs(b3) << endl;
}

