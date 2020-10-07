// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Rect.h"

using namespace std;
int getValue(string str) {
	cout << str << ": ";
	int a;
	cin >> a;
	return a;
};
int main()
{

	setlocale(LC_ALL, "Russian");

	int w = getValue("Ширина");
	int h = getValue("Высота");
	Rect rect(h, w);
	cout << "Площадь: " << rect.S() << endl;
	cout << "Периметр: " << rect.P();
}


