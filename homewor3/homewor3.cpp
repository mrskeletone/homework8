#include <iostream>
#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	Student* a;
	int n;
	cout << "Введите кол-во студентов:";
	cin >> n;
	int newscore;
	number(a, n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << i+1 << ' ' << a[i] << endl;
	}
	cout << "Введите новую оценку для 1 студента:";
	cin >> newscore;
	a[0] = newscore;
	cout << a[0];
}
