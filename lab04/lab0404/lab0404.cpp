﻿// lab0404.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int i, j, m, n, x, M[10][10]; 
     cout << "Введіть кількість рядків і стовпців: ";
      cin >> m >> n;
      if (m != n)
      {
          cout << "Матирця не квадратна";
          exit(0);
      }
     cout << "Введіть елементи матриці : ";
      for (i = 0; i < m; i++)
          for (j = 0; j < n; j++) 
              cin >> M[i][j];
      cout << "Матриця : \n ";
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
             cout << M[i][j] << " ";
          cout << "\n ";
      }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (M[i][n - 1 - i] % 4 == 0) {
            sum += M[i][n - 1 - i];
        }
    }
    cout << sum;
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
