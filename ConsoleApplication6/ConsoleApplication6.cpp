#include <iostream>
using namespace std;

int i, j, key = 0;
void BubbleSort2(int* a, int n) //сортировка всплытие 
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j--) {
			if (a[j - 1] > a[j]) {
				key = a[j - 1];
				a[j - 1] = a[j];
				a[j] = key;
			}
		}
		cout << endl << "Сортировка:\t";
		for (int i = 0; i < n; i++) {
			cout << a[i] << "\t";}
	}
	cout << endl << "Результирующий массив: ";
	for (i = 0; i < n; i++) //вывод массива
		cout << a[i] << " ";
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Количество элементов в массиве > "; cin >> n;
	int* a = new int[n];
	cout << "Исходный массив: ";
	for (i = 0; i < n; i++) {
		a[i] = rand() % 50;
		cout << a[i] << " ";
	}
	BubbleSort2(a, n);
	cout << endl;
	delete[] a;
	system("pause");
	return 0;
}
