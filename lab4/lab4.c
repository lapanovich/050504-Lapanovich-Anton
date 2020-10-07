#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int n, i, j, ms[100] = { 0 }, ms1[100] = { 0 };
	ms[0] = ms1[0] = 2;
	do {
		printf_s("Введите количество чисел: ");
		scanf_s("%d", &n);
	} while ((n > 100) || (n < 2)); // проверка допустимого значения числа
	for (i = 0; i < n - 1; i++) { 
		ms[i+1] = ms1[i+1] = ms[i]+1; // заполнение массивов
		if (i % 10 == 0) printf_s("\n");  // каждый 10-ый эл. массива переход на новую строку
		printf_s("%4d", ms[i]); // вывод значения эл. массива
	} ms[i] = ms[i-1]+1;
	printf_s("%4d", ms[i]);
	printf_s("\n  Меньшие n-простые числа: ");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if ((j > i) && (ms[j] % ms[i] == 0)) ms1[j] = 0; // проверка зн. эл. массива используя решето Эратосфена
		}
	}
	for (i = 0; i < n; i++) {
		if (i % 10 == 0) printf_s("\n"); // каждый 10-ый эл. массива переход на новую строку
	    printf_s("%4d", ms1[i]); // вывод значения эл. массива
	}     
	   return 0;
}