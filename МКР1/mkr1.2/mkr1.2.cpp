﻿// mkr1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int A[20][20]{}, n, m, j, i;
	cout << "Введіть кількість рядків і стовпців: ";
	cin >> m >> n;
	if (m != n)
	{
		cout << "Матирця не квадратна";
		exit(0);
	}
	cout << "Введіть елементи матриці : ";
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> A[i][j];
	cout << "Матриця : \n ";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << A[i][j] << " ";
		cout << "\n ";
	}
	int max = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				count = 1;
			}
			else if (A[i][j] == max) {
				count++;
			}
		}
	}

	cout << "Кількість максимальних елементів: " << count;

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
