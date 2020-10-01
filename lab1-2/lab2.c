#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int i, j, k, str1, str2, stolb1, stolb2, a[10][10], b[10][10], c[10][10] = { 0 };
	str1 = str2 = stolb1 = stolb2 = 0;
	do {
		printf_s("Введите количество строк и столбцов первой матрицы: ");
		scanf_s("%d%d", &str1, &stolb1);
		printf_s("Введите количество строк и столбцов второй матрицы: ");
		scanf_s("%d%d", &str2, &stolb2);
		system("cls");
	} while ((stolb1 != str2) // проверка на возможность умножения
		|| (str1 > 10) || (str2 > 10) || (stolb1 > 10) || (stolb2 > 10)); // проверка допустимого значения строк и столбцов
	printf_s("Введите значения элементов первой матрицы: ");
	for (i = 0; i < str1; i++) {
		for (j = 0; j < stolb1; j++) scanf_s("%d", &a[i][j]); // заполнение зн. эл. 1-ой матрицы
	}
	printf_s("Введите значения элементов второй матрицы: ");
	for (i = 0; i < str2; i++) {
		for (j = 0; j < stolb2; j++) scanf_s("%d", &b[i][j]); // заполнение зн. эл. 2-ой матрицы
	}
	for (i = 0; i < str1; i++) {
		for (j = 0; j < stolb2; j++) {
			for (k = 0; k < stolb1; k++) c[i][j] += a[i][k] * b[k][j]; // произведение матриц, заполнение зн. элементов 3-ей матрицы
		}
	} printf_s("Произведение матриц равно:\n");
	for (i = 0; i < str1; i++) {
		for (j = 0; j < stolb2; j++) printf_s("%d\t", c[i][j]);
		printf_s("\n");
	}    
	     return 0;
}
