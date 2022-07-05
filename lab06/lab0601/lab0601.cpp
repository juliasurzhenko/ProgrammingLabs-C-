// lab0601.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct ZNAK
{
	char name[100];
	char zodiak[100];
	int date[3];
};
ZNAK zn = {};

int main() {
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
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
            
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
