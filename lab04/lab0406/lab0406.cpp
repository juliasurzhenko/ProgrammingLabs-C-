﻿// lab0406.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;

int main()
{
	int const N = 4, M = 5; //N-автобуси,M-зупинки
	int Matr[N][M] = {
		{1, 0, 1, 0, 1},
		{0, 0, 1, 0, 1},
		{1, 1, 0, 1, 1},
		{0, 1, 1, 0 ,0}
	};
	
	int Sum;
	int max = 0;
	for (int j = 0; j < M; j++) {
		Sum = 0;
		for (int i = 0; i < N; i++) {
			Sum += Matr[i][j];
			
			if (Sum > max)
				max = Sum;
		};
		
	};
cout << max;
}
	//int Max=Matr[0][0];
	//int Max;
	//int *m=&Matr[N][M];
	//if (*m > 0) {
	//	for (int i = 0; i < N; i++) {
	//		for (int j = 0; j < M; j++) {

	//			Max = Matr[i][j];
	//			cout << "[" << i << "]" << "[" << j << "]";

		

		//for (int j = 0; j < M; j++) {
		//	if (Matr[i][j] > Max) {
		//		Max = Matr[i][j];
			//	cout << "[" << i << "]" << "[" << j << "]";
			//}
				
			
	



	

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
