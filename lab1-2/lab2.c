#include <stdio.h>
#include <locale.h>

int main() {
		setlocale(LC_ALL, "Russian");
	int i, j, k, row1, row2, col1, col2, a[10][10], b[10][10], c[10][10] = { 0 };
	row1 = row2 = col1 = col2 = 0;

	do {
		printf_s("Введите количество строк и столбцов первой матрицы: ");
		    scanf_s("%d%d", &row1, &col1);
		printf_s("Введите количество строк и столбцов второй матрицы: ");
		    scanf_s("%d%d", &row2, &col2);
		system("cls");
	} 
	while ((col1 != row2) || (row1 > 10) || (row2 > 10) || (col1 > 10) || (col2 > 10)); // проверка возможности умножения, допустимого значения строк и столбцов
	    printf_s("Введите значения элементов первой матрицы: ");

	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) scanf_s("%d", &a[i][j]); // заполнение зн. эл. 1-ой матрицы
	}
	    printf_s("Введите значения элементов второй матрицы: ");

	for (i = 0; i < row2; i++) {
		for (j = 0; j < col2; j++) scanf_s("%d", &b[i][j]); // заполнение зн. эл. 2-ой матрицы
	}
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col2; j++) {
			for (k = 0; k < col1; k++) c[i][j] += a[i][k] * b[k][j]; // произведение матриц, заполнение зн. элементов 3-ей матрицы
		}
	} 
	    printf_s("Произведение матриц равно:\n");

	for (i = 0; i < row1; i++) {
		for (j = 0; j < col2; j++) printf_s("%d\t", c[i][j]);
		printf_s("\n");
	}    
	     return 0;
}
