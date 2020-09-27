#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int i, j, k, a[2][3], b[3][2], c[2][2] = {0};
	int str1 = 2, str2 = 3, stolb1 = 3, stolb2 = 2;
	printf_s("Введите значения первой матрицы: ");
		for (i = 0; i < str1; i++) {
			for (j = 0; j < stolb1; j++) scanf_s("%d", &a[i][j]); // заполнение зн. эл. 1-ой матрицы
	    }
		printf_s("Введите значения второй матрицы: ");
		for (i = 0; i < str2; i++) {
			for (j = 0; j < stolb2; j++) scanf_s("%d", &b[i][j]); // заполнение зн. эл. 2-ой матрицы
		}
		for (i = 0; i < str1; i++) {
			for (j = 0; j < stolb2; j++) {
				for (k = 0; k < stolb1; k++) c[i][j] += a[i][k] * b[k][j]; // произведение матриц, заполнение зн. эд. элементов 3-ей матрицы
			}
		} printf_s("Произведение матриц равно:\n");
		for (i = 0; i < str1; i++) {
			for (j = 0; j < stolb2; j++) {
				printf_s("%d\t", c[i][j]);
			} printf_s("\n");
		}
	return 0;
	}
