#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int n, i, j, ms[100] = { 0 };

	do {
		printf_s("  Введите количество чисел: ");
		scanf_s("%d", &n);
	} while ((n > 100) || (n < 2));    // проверка допустимого значения числа

	for (i = 0; i < n; i++) {
		ms[i] = ms[i]+i;    // заполнение массивов
		if (i % 10 == 0) printf_s("\n");    // каждый 10-ый эл. массива переход на новую строку
		printf_s("%4d", ms[i]);    // вывод значения эл. массива
	} ms[1] = 0;    // замена 1 на 0, т.к не является простым числом
	printf_s("\n\n  Меньшие n-простые числа:\n");

	for (i = 0; i < n; i++) {
		if (ms[i] == 0) continue;

		for (j = 0; j < n; j++) {
			if (ms[j] == 0) continue;
			else if (j <= i) continue;    
			else if (ms[j] % ms[i] == 0) ms[j] = 0;    // отбор чисел согласно Решето Эратосфена
		}
	}
	for (i = 0; i < n; i++) {
		if (i % 10 == 0) printf_s("\n");    // каждый 10-ый эл. массива переход на новую строку
		printf_s("%4d", ms[i]);    // вывод значения эл. массива
	}
	    return 0;
}
