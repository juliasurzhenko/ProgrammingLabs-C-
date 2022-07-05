// lab0703.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

int lab1_1()
{
	setlocale(LC_CTYPE, "ukr");
	int a;
	std::cout << "Введіть 1 число";
	std::cin >> a;
	int b;
	std::cout << "Введіть 2 число";
	std::cin >> b;
	int c;
	std::cout << "Введіть 3 число";
	std::cin >> c;
	double kor;
	kor = sqrt((a * b) + (a * c) + (b * c));
	std::cout << kor;
	return 0;
}
int lab1_2() {
	int grad;
	int min;
	int sec;
	const double M_PI = 3.14159;
	scanf_s("%d %d %d", &grad, &min, &sec); //введення числа градусів, хвилин, секунд
	long double rad;
	double k = round(grad / 360);
	if (k >= 1 && grad > 0) grad = grad - 360 * k;
	if (grad >= 0) rad = grad * M_PI / 180 + min * M_PI / 60 / 180 + sec * M_PI / 180 / 3600;
	else rad = grad * M_PI / 180 - min * M_PI / 60 / 180 + sec * M_PI / 180 / 3600;
	printf("%.*Lf", LDBL_DIG, rad);
	return 0;
}
int lab2_1() {
	setlocale(LC_CTYPE, "ukr");
	int a, b, c, d;
	char buff[4] = { 'a','b','c','d' };
	cout << "Введіть число: ";
	cin >> a;
	cout << "Введіть число: ";
	cin >> b;
	cout << "Введіть число: ";
	cin >> c;
	cout << "Введіть число: ";
	cin >> d;
	if (a != b && a != c)
	{
		cout << endl << a * a;
	}
	if (b != a && b != c)
	{
		cout << endl << b * b;
	}
	if (c != a && c != b)
	{
		cout << endl << c * c;
	}
	if (d != a && d != b)
	{
		cout << endl << d * d;
	}

	return 0;
}
int lab2_2() {

	setlocale(LC_CTYPE, "ukr");
	int x;
	double a, b;
	cout << "Введіть x";
	cin >> x;
	b = (pow(x, 3) + x - 2);
	a = (x - 5) / b;
	if (b < 0) {
		cout << "розв'язку немає";
	}
	else {
		cout << "a=" << a;
	}
	return 0;
}
int lab3() {
	setlocale(LC_CTYPE, "ukr");
	int a, b;
	cout << "Введіть a:";
	cin >> a;
	cout << "Введіть b:";
	cin >> b;
	int* aPtr = &a, * bPtr = &b;

	*aPtr = a * 3;
	*bPtr = b / 3;
	cout << "a=" << *aPtr << endl;
	cout << "b=" << *bPtr << endl;
	return 0;
}
int lab4_1() {

	int arr[100] = {};
	int a, a1 = 1, a2 = 1, a3 = 2, a4 = 3, n, i;
	cout << "kilkist elementiv: ";
	cin >> n;
	cout << a1;
	cout << " ";
	cout << a2;
	cout << " ";
	cout << a3;
	cout << " ";
	cout << a4;
	cout << " ";
	for (i = 0; i < n; i++) {

		a = a3 * a4;
		a3 = a4;
		a4 = a;
		cout << a;
		cout << " ";
	}
	return 0;
}
int lab4_2() {
	int arr[100] = {};
	int n, i, j, count = 0;
	cout << "vvesti rozmir masivu: ";
	cin >> n;
	// Елементи  Q=і;
	cout << "vvesti elementi masivu: ";
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count_number = 0;
	int max_count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{

			if (arr[i] == arr[j])
			{
				count++;
				break;
			}
		}
	}
	cout << "\nRESULT: " << count;

	return 0;

}
int lab5() {
	setlocale(LC_CTYPE, "UKR");
	string str1;
	cout << "Введiть рядок: ";
	getline(cin, str1);
	string str[4] = { "ab","abv","aba","abab" };
	for (int i = 0; i < 4; i++) {
		cout << str[i] << endl;

		int count = 0;
		for (int j = 0; (j = str1.find(str[i], j)) != string::npos; j++) {
			count++;
		}    cout << count << "times" << endl;
	}
	return 0;
}
struct ZNAK
{
	char name[100];
	char zodiak[100];
	int date[3];
};
ZNAK zn = {};

int lab6() {
	ZNAK temp;
	const int k = 100;
	char znak[k]{};
	int i, j;
	bool not_found, sort = 1;
	int n = 2; //kilkist structur
	ZNAK* Znak = new ZNAK[n];//vydilenya v dinamichniy pamiati 
	for (i = 0; i < n; i++) {
		cout << "vvedir imya i familiu: ";
		cin.getline(Znak[i].name, k);
		cout << "vvedit znak zodiaka: ";
		cin >> Znak[i].zodiak;
		for (j = 0; j < n; j++) {
			cout << "vvedit den' narodzhenia: ";
			cin >> Znak[i].date[j++];
			cout << "vvedir misyac narodzhenia: ";
			cin >> Znak[i].date[j++];
			cout << "vvedit rik narodzhenia: ";
			cin >> Znak[i].date[j];
		}
		cout << endl;
	}

	while (sort) {
		sort = 0;
		for (i = 0; i < n - 1; i++) {
			if (Znak[i].date[2] > Znak[i + 1].date[2]) {
				temp = Znak[i];
				Znak[i + 1] = Znak[i + 1];
				Znak[i + 1] = temp;
				sort = 1;
			}
			if ((Znak[i].date[2] == Znak[i + 1].date[2]) && (Znak[i].date[1] > Znak[i + 1].date[1])) {
				temp = Znak[i];
				Znak[i + 1] = Znak[i + 1];
				Znak[i + 1] = temp;
				sort = 1;
			}
			if ((Znak[i].date[2] == Znak[i + 1].date[2]) && \
				(Znak[i].date[1] == Znak[i + 1].date[1]) && \
				(Znak[i].date[0] > Znak[i + 1].date[0]))
			{
				temp = Znak[i];
				Znak[i + 1] = Znak[i + 1];
				Znak[i + 1] = temp;
				sort = 1;
			}
		}
	}
	cout << "zapisi vporyzdkovani po datam narodzhenia:\n";
	for (i = 0; i < n; i++) {
		cout << "Imya i prizvishche: " << Znak[i].name << endl;
		cout << "Znak zodiaka: " << Znak[i].zodiak << endl;
		cout << "data narodzhenia: ";
		for (j = 0; j < n; j++) {
			cout << Znak[i].date[j];
		}
		cout << endl;
	}
	cout << "Ludi yaki rodilisya pid znakom: " << endl;
	while (true) {
		cout << "vvedit znak zodiaka: ";
		cin >> znak;
		if (strcmp(znak, "end") == 0)break;
		not_found = true;
		for (i = 0; i < n; i++) {
			if (strcmp(Znak[i].zodiak, znak) == 0) {
				cout << "Familia i imya: " << Znak[i].name << endl;
				cout << "Znak zodiaka: " << Znak[i].zodiak << endl;
				cout << "data: ";
				for (j = 0; j < n; j++) {
					cout << Znak[i].date[j] << "";
				}
				not_found = false;
				cout << endl << endl;
			}
		}
		if (not_found)cout << "Takih lydei nema!" << endl;
		return 0;

	}
}
	
unsigned int doublefactorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * doublefactorial(n - 2);
}
int lab7() {

	printf("Double factorial is %d", doublefactorial(5));
	return 0;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Виклик функції Лабораторної роботи №1, задача №1: " << endl;
	lab1_1();
	cout << "Виклик функції Лабораторної роботи №1, задача №2: " << endl;
	lab1_2();
	cout << "Виклик функції Лабораторної роботи №2, задача №1: " << endl;
	lab2_1();
	cout << "Виклик функції Лабораторної роботи №2, задача №2: " << endl;
	lab2_2();
	cout << "Виклик функції Лабораторної роботи №3: " << endl;
	lab3();
	cout << "Виклик функції Лабораторної роботи №4, задача №1: " << endl;
	lab4_1();
	cout << "Виклик функції Лабораторної роботи №4, задача №2: " << endl;
	lab4_2();
	cout << "Виклик функції Лабораторної роботи №5: " << endl;
	lab5();
	cout << "Виклик функції Лабораторної роботи №6: " << endl;
	lab6();
	cout << "Виклик функції Лабораторної роботи №7: " << endl;
	lab7();

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
